#include "Accounting.hpp"
#include <iostream>
#include <sstream>

// Constructor implementation
Accounting::Accounting(const std::string &num, const std::string &name, double bal)
    : accountNumber(num), accountName(name), balance(bal) {}

// Private helper methods implementation
void Accounting::logTransaction(const std::string& transactionType, double amount) {
    // This is just a stub for demonstration purposes.
}

bool Accounting::validateAmount(double amount) const {
    return amount > 0;
}

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

double Accounting::withdraw(double amount) {
    if (validateAmount(amount) && amount <= balance) {
        updateBalance(amount, false);
        std_cout("Withdrawal successful. Remaining balance: $" + std::to_string(balance));
    } else {
        std_cout("Invalid or insufficient funds for withdrawal.");
    }
    return balance;
}

// Accessors implementation
std::string Accounting::getAccountNumber() const {
    return accountNumber;
}

std::string Accounting::getAccountName() const {
    return accountName;
}

double Accounting::getBalance() const {
    return balance;
}
