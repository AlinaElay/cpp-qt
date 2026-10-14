#pragma once
#include <numeric>
#include <iostream>
#include <cstdint>

// Реализуйте класс Rational.
class Rational {
public:
    Rational() = default;

    Rational(int numerator)
        : numerator_{numerator} {}

    Rational(int numerator, int denominator)
        : numerator_{numerator}
        , denominator_{denominator} {
        Reduction();
    }

    Rational(const Rational& rational)
        : numerator_{rational.GetNumerator()}
        , denominator_{rational.GetDenominator()} {
        Reduction();
    }

    int GetNumerator() const {
        return numerator_;
    }

    int GetDenominator() const {
        return denominator_;
    }

    Rational Inv() const {
        return Rational{denominator_, numerator_};
    }

    Rational operator+=(const Rational& rational_right) {
        numerator_ = numerator_ * rational_right.GetDenominator() + denominator_ * rational_right.GetNumerator();
        denominator_ *= rational_right.GetDenominator();
        Reduction();
        return *this;
    }

    Rational operator-=(const Rational& rational_right) {
        numerator_ = numerator_ * rational_right.GetDenominator() - denominator_ * rational_right.GetNumerator();
        denominator_ *= rational_right.GetDenominator();
        Reduction();
        return *this;
    }

    Rational operator*=(const Rational& rational_right) {
        numerator_ *= rational_right.GetNumerator();
        denominator_ *= rational_right.GetDenominator();
        Reduction();
        return *this;
    }

    Rational operator/=(const Rational& rational_right) {
        numerator_ *= rational_right.GetDenominator();
        denominator_ *= rational_right.GetNumerator();
        Reduction();
        return *this;
    }

    Rational operator+(const Rational& rational_right) const {
        Rational rational_new{*this};
        rational_new += rational_right;
        return rational_new;
    }

    Rational operator-(const Rational& rational_right) const {
        Rational rational_new{*this};
        rational_new -= rational_right;
        return rational_new;
    }

    Rational operator*(const Rational& rational_right) const {
        Rational rational_new{*this};
        rational_new *= rational_right;
        return rational_new;
    }
    Rational operator/(const Rational& rational_right) const {
        Rational rational_new{*this};
        rational_new /= rational_right;
        return rational_new;
    }

    Rational& operator=(const Rational& rational_right) {
        numerator_ = rational_right.GetNumerator();
        denominator_ = rational_right.GetDenominator();
        return *this;
    }

    Rational operator+() const {
        return *this;
    }

    Rational operator-() const {
        return Rational{-numerator_, denominator_};
    }

    auto operator==(const Rational& rational_right) const {
        return  static_cast <int64_t> (numerator_) * rational_right.GetDenominator () ==
               static_cast <int64_t> (denominator_) * rational_right.GetNumerator ();
    }

    auto operator<=>(const Rational& rational_right) const {
        return  static_cast <int64_t> (numerator_) * rational_right.GetDenominator () <=>
               static_cast <int64_t> (denominator_) * rational_right.GetNumerator ();
    }

    friend std::istream& operator>>(std::istream& is, Rational& r);
    friend std::ostream& operator<< (std::ostream& out, const Rational& r);
private:
    void Reduction() {
        if (denominator_ < 0) {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }
        const int divisor = std::gcd(numerator_, denominator_);
        numerator_ /= divisor;
        denominator_ /= divisor;
    }

private:
    int numerator_ = 0;
    int denominator_ = 1;
};

inline std::istream& operator>>(std::istream& is, Rational& r) {
    if (!(is >> r.numerator_)){
        is.setstate(std::ios::failbit);
        //std::cout << "1" << std::endl;
        return is;
    }
    char op;
    if (!(is >> std::ws >> op)) {
        //is.setstate(std::ios::failbit);
        //std::cout << op << "3" << std::endl;
        is.clear();
        return is;
    }
    if (op != '/') {
        //is.setstate(std::ios::failbit);
        //std::cout << r.numerator_;
        //std::cout << op << "4" << std::endl;
        is.clear();
        return is;
    }
    if (!(is >> r.denominator_) || r.denominator_ == 0) {
        is.setstate(std::ios::failbit);
        //std::cout << "4" << std::endl;
        return is;
    }
    //std::cout << "4" << std::endl;
    return is;
}

inline std::ostream& operator<< (std::ostream& out, const Rational& r) {
    if (r.denominator_ == 1) {
        out << r.numerator_;
        return out;
    }
    out << r.numerator_ << " / " << r.denominator_;
    return out;
}


