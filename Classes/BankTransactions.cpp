#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class BankAccount {
    int accountNumber;
    string accountHolder;
    float balance;
public:
    BankAccount(int accountNumber, string accountHolder, float initialBalance) : accountNumber(accountNumber),accountHolder(accountHolder),balance(initialBalance)
        { }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful. New balance: $" << balance << endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << endl;
        }
        else {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};
int main() {
    cout << "Gul Fatima, SE-23007" << endl;
    BankAccount myAccount(101, "John Doe", 1000);
    cout << "Initial Account Information:" << endl;
    myAccount.display();
    cout << endl;
    myAccount.deposit(500);
    myAccount.withdraw(200);
    _getch(); 
    return 0;
}
