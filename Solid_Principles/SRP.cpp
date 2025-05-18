//Bank Account system handling transaction and printing statement

//violating SRP
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount {
    string name;
    vector<string> Transactions;
    int balance;
public:
    BankAccount(string n, vector<string> s = {}): name(n), Transactions(s), balance(0) {}

    void deposit(int price) {
        balance += price;
        Transactions.push_back("Deposit: " + to_string(price));
    }

    int withdraw(int price) {
        if (balance >= price) {
            balance -= price;
            Transactions.push_back("Withdraw: " + to_string(price));
            return price;
        } else {
            Transactions.push_back("Failed Withdrawal: " + to_string(price));
            return 0;
        }
    }

    void printStatement() {
        cout << "Owner: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transactions:" << endl;
        for (const auto& t : Transactions) {
            cout << "  - " << t << endl;
        }
    }
};


// following SRP
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount {
    string name;
    vector<string> Transactions;
    int balance;
public:
    BankAccount(string n, vector<string> s = {}) : name(n), Transactions(s), balance(0) {}

    int getBalance() const { return balance; }
    string getName() const { return name; }
    const vector<string>& getTransactions() const { return Transactions; }

    void deposit(int price) {
        balance += price;
        Transactions.push_back("Deposit: " + to_string(price));
    }

    int withdraw(int price) {
        if (balance >= price) {
            balance -= price;
            Transactions.push_back("Withdraw: " + to_string(price));
            return price;
        } else {
            Transactions.push_back("Failed Withdrawal: " + to_string(price));
            return 0;
        }
    }
};

class StatementPrinter {
public:
    void printStatement(const BankAccount& acc) {
        cout << "Owner: " << acc.getName() << endl;
        cout << "Balance: " << acc.getBalance() << endl;
        cout << "Transactions:" << endl;
        for (const auto& t : acc.getTransactions()) {
            cout << "  - " << t << endl;
        }
    }
};

int main() {
    BankAccount acc("Alice");
    acc.deposit(100);
    acc.withdraw(50);
    acc.withdraw(100); // should fail

    StatementPrinter printer;
    printer.printStatement(acc);
    return 0;
}
