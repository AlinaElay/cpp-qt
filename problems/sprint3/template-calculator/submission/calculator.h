
#pragma once

#include <string>
#include <optional>
#include <cmath>
#include "rational.h"
#include "pow.h"

using Error = std::string;

template<class Number>
class Calculator {
public:
    void Set(Number n) {
        working_number_ = n;
    }

    Number GetNumber() const {
        return working_number_;
    }

    std::optional<Error> Add(Number n) {
        working_number_ += n;
        return std::nullopt;
    }

    std::optional<Error> Sub(Number n) {
        working_number_ -= n;
        return std::nullopt;
    }

    std::optional<Error> Div(Number n) {
        if constexpr (std::is_integral_v<Number> || std::is_same_v<Number, Rational>) {
            if (n == 0) {
                return "Division by zero";
            }
        }
        working_number_ /= n;
        return std::nullopt;
    }

    std::optional<Error> Mul(Number n) {
        working_number_ *= n;
        return std::nullopt;
    }


    std::optional<Error> Pow(Number n) {
        if constexpr (std::is_integral_v<Number> || std::is_same_v<Number, Rational>) {
            if (n == 0 && working_number_ == 0) {
                return "Zero power to zero";
            }
        }
        if constexpr (std::is_same_v<Number, Rational>) {
            if (n.GetDemominator() != 1) {
                return "Fractional power is not supported";
            }
        }
        if constexpr (std::is_integral_v<Number>) {
            if (n < 0) {
                return "Integer negative power";
            }
        }
        working_number_ = ::Pow(working_number_, n);
        return std::nullopt;
    }

    void Save() {
        memory_ = working_number_;
    }

    void Load() {
        working_number_ = memory_;
    }

    bool HasMem() const {
        return memory_ == std::nullopt ? false : true;
    }

    std::string GetNumberRepr() const {
        return std::to_string(working_number_);
    }

private:
    Number working_number_ = 0;
    std::optional<Number> memory_ = 0;
};

template<class Number>
Number Pow (Number working_number, Number n) {
    return IntegerPow(working_number, n);
}

template<>
Rational Pow<Rational>(Rational working_number, Rational n) {
    return Pow(working_number, n);
}