#include "Accounting.hpp"
#include <iostream>
#include <sstream>

// Constructor implementation
Accounting::Accounting(const std::string &num, const std::string &name, double bal)
    : accountNumber(num), accountName(name), balance(bal) {}

void Accounting::updateBalance(double amount, bool isDeposit) {
    balance = isDeposit ? Calculator::add(balance, amount) : Calculator::subtract(balance, amount);
}

// Method for standardized console output
void Accounting::std_cout(const std::string& message) {
    std::cout << message << std::endl;
}

// Public methods implementation
double Accounting::deposit(double amount) {
    if (validateAmount(amount)) {
        updateBalance(amount, true);
        std_cout("Deposit successful. New balance: $" + std::to_string(balance));
    } else {
        std_cout("Invalid deposit amount.");
    }
    return balance;
}
