#pragma once

#include <string>
#include <optional>
#include <cmath>
#include "rational.h"
#include "pow.h"

using Error = std::string;

template<typename Number>
Number PowTemplate(Number working_number, Number n) {
    return IntegerPow(working_number, n);
}

template<>
Rational PowTemplate<Rational>(Rational working_number, Rational n) {
    return Pow(working_number, n);
}

template<>
float PowTemplate<float>(float working_number, float n) {
    return std::pow(working_number, n);
}

template<>
double PowTemplate<double>(double working_number, double n) {
    return std::pow(working_number, n);
}

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
            if (n.GetDenominator() != 1) {
                return "Fractional power is not supported";
            }
        }
        if constexpr (std::is_integral_v<Number>) {
            if (n < 0) {
                return "Integer negative power";
            }
        }
        working_number_ = ::PowTemplate(working_number_, n);
        return std::nullopt;
    }

    void Save() {
        memory_ = working_number_;
    }

    void Load() {
        working_number_ = memory_.value();
    }

    bool GetHasMem() const {
        return memory_.has_value();
    }

    std::string GetNumberRepr() const {
        return std::to_string(working_number_);
    }

private:
    Number working_number_ = 0;
    std::optional<Number> memory_ = std::nullopt;
};


