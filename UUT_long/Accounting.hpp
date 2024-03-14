#ifndef ACCOUNTING_HPP
#define ACCOUNTING_HPP

#include <string>
#include "Calculator.hpp" // Include the Calculator class

class Accounting {
private:
    std::string accountNumber;
    std::string accountName;
    double balance;

    // Private helper methods
    void logTransaction(const std::string& transactionType, double amount);
    bool validateAmount(double amount) const;
    void updateBalance(double amount, bool isDeposit);

    // Method for standardized console output
    void std_cout(const std::string& message);

public:
    // Constructor
    Accounting(const std::string &num, const std::string &name, double bal);

    // Methods to deposit and withdraw money
    double deposit(double amount);
    double withdraw(double amount);

    // Accessors
    std::string getAccountNumber() const;
    std::string getAccountName() const;
    double getBalance() const;
};

#endif // ACCOUNTING_HPP
