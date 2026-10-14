#include "calculator.h"
#include <cmath>
#include <string>
using namespace std;

void Calculator::Set(Number n) {
    working_number_ = n;
}

Number Calculator::GetNumber() const {
    return working_number_;
}

void Calculator::Add(Number n) {
    working_number_ += n;
}

void Calculator::Sub(Number n) {
    working_number_ -= n;
}

void Calculator::Div(Number n) {
    working_number_ /= n;
}

void Calculator::Mul(Number n) {
    working_number_ *= n;
}

void Calculator::Pow(Number n) {
    working_number_ = pow(working_number_, n);
}

void Calculator::Save() {
    memory_ = working_number_;
    is_memory_empty_ = false;
}

void Calculator::Load() {
    working_number_ = memory_;
}

bool Calculator::HasMem() const {
    return is_memory_empty_ ? false : true;
}

std::string Calculator::GetNumberRepr() const {
    return std::to_string(working_number_);
}