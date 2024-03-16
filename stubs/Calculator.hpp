#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator {
public:
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b); // Note: Assumes b is not zero
};

#endif // CALCULATOR_HPP
