#include <iostream>
using namespace std;

class BankAccount {
protected:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    virtual void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class FixedTermDepositAccount : public BankAccount {
public:
    FixedTermDepositAccount(double initialBalance) : BankAccount(initialBalance) {}

    // withdraw should NOT be allowed, but it's inherited!
};

int main() {
    FixedTermDepositAccount fixed(1000);
    fixed.withdraw(500); // ❌ Logically wrong, allowed by design

    return 0;
}


/////////////////with lsp
#include <iostream>
using namespace std;

class BankAccount {
protected:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    virtual void deposit(double amount) {
        balance += amount;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class RegularAccount : public BankAccount {
public:
    RegularAccount(double initialBalance) : BankAccount(initialBalance) {}

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
};

class FixedTermDepositAccount : public BankAccount {
public:
    FixedTermDepositAccount(double initialBalance) : BankAccount(initialBalance) {}

    // No withdraw function — ✅ cannot misuse it
};

int main() {
    RegularAccount regular(1000);
    regular.withdraw(300); // ✅ allowed
    regular.showBalance();

    FixedTermDepositAccount fixed(2000);
    // fixed.withdraw(300); ❌ not allowed — no such function
    fixed.showBalance();

    return 0;
}
