#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator {
public:
    static double add(double a, double b);
    static double subtract(double a, double b);
    static double multiply(double a, double b);
    static double divide(double a, double b); // Note: Assumes b is not zero
};

#endif // CALCULATOR_HPP