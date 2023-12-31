#include <iostream>
#include <stdexcept>

using namespace std;

class LowBalanceException : public exception {
public:
    string what(){
        return "No sufficient balance";
    }
};

class BankAccount {
private:
    double balance;
    const double minBalance = 100.0;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}
    void withdraw(double amount) {
        if (balance - amount < minBalance) {
            throw LowBalanceException();
        }
        balance -= amount;
        cout << "Withdrawal successful. Remaining balance: " << balance << endl;
    }
};

int main() {
    try {
        BankAccount account(150.0);
        account.withdraw(80.0);
        account.withdraw(100.0);
    } catch (LowBalanceException e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}