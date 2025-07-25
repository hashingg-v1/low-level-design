#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // kept private to protect data

public:
    BankAccount(double initial) : balance(initial) {}

    void deposit(double amount) {
        balance += amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(1000);
    account.deposit(500);
    cout << "Balance: $" << account.getBalance() << endl; // Output: Balance: $1500
    return 0;
}
