#include <iostream>
#include <string>
using namespace std;
// BankAccount ADT
class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;  // Data is hidden (Encapsulation)

public:
    BankAccount(string name, int accNum, double initialBalance) {
        accountHolder = name;
        accountNumber = accNum;
        balance = initialBalance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid amount!\n";
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    // Check balance
    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }

    // Display account details
    void displayAccount() {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Main function
int main() {
    // Create a BankAccount object (ADT)
    BankAccount myAccount("Kamal Ali", 12345, 10000);

    myAccount.displayAccount();
    myAccount.deposit(2000);
    myAccount.withdraw(1500);
    myAccount.checkBalance();

    return 0;
}

