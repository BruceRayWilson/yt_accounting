#include "Calculator.hpp"

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    // Note: This function assumes b is not zero. In a real-world scenario, you would want to handle division by zero appropriately.
    return a / b;
}
