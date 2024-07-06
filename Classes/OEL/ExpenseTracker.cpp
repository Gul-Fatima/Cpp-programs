#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    int day, month, year;

    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    friend ostream& operator<<(ostream& os, const Date& dt) {
        os << dt.day << "/" << dt.month << "/" << dt.year;
        return os;
    }
};

class Expense {
private:
    int amount;
    Date date;
    string category;

public:
    Expense(int a = 0, Date d = Date(), string c = "") : amount(a), date(d), category(c) {}

    int getAmount() const {
        return amount;
    }

    Date getDate() const {
        return date;
    }

    string getCategory() const {
        return category;
    }
};

class ExpenseTracker {
private:
    static const int maxExpenses = 100;
    Expense expenses[maxExpenses];
    int count;

public:
    ExpenseTracker() : count(0) {}

    void addExpense(const Expense& exp) {
        if (count < maxExpenses) {
            expenses[count] = exp;
            count++;
        } else {
            cout << "Expense tracker is full!" << endl;
        }
    }

    void removeExpense(int index) {
        if (index >= 0 && index < count) {
            for (int i = index; i < count - 1; i++) {
                expenses[i] = expenses[i + 1];
            }
            count--;
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    int getTotalExpense() const {
        int total = 0;
        for (int i = 0; i < count; i++) {
            total += expenses[i].getAmount();
        }
        return total;
    }

    void getExpensesByCategory(const string& category) const {
        for (int i = 0; i < count; i++) {
            if (expenses[i].getCategory() == category) {
                cout << "Amount: " << expenses[i].getAmount() << ", Date: " << expenses[i].getDate() << ", Category: " << expenses[i].getCategory() << endl;
            }
        }
    }

    void displayExpenses() const {
        for (int i = 0; i < count; i++) {
            cout << "Amount: " << expenses[i].getAmount() << ", Date: " << expenses[i].getDate() << ", Category: " << expenses[i].getCategory() << endl;
        }
    }
};

int main() {
    ExpenseTracker tracker;

    tracker.addExpense(Expense(100, Date(5, 7, 2023), "Food"));
    tracker.addExpense(Expense(200, Date(6, 7, 2023), "Transport"));
    tracker.addExpense(Expense(50, Date(7, 7, 2023), "Food"));

    cout << "Total Expense: " << tracker.getTotalExpense() << endl;

    cout << "Expenses by category 'Food':" << endl;
    tracker.getExpensesByCategory("Food");

    cout << "All Expenses:" << endl;
    tracker.displayExpenses();

    tracker.removeExpense(1); // Removing the second expense

    cout << "Expenses after removal:" << endl;
    tracker.displayExpenses();

    return 0;
}
