#include <iostream>
using namespace std;


class Account {
protected:
    int accNo;
    double balance;

public:
    Account(int a, double b) {
        accNo = a;
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};


class Savings : public Account {
private:
    double interestRate;

public:
    Savings(int a, double b, double r) : Account(a, b) {
        interestRate = r;
    }

    void displaySavings() {
        display();
        cout << "Interest Rate: " << interestRate << "%" << endl;

    }
};


class Current : public Account {
private:
    double overdraftLimit;

public:
    Current(int a, double b, double o) : Account(a, b) {
        overdraftLimit = o;
    }

    void withdraw(double amount) {
        if (balance + overdraftLimit >= amount) {
            balance -= amount;
        } else {
            cout << "Overdraft limit exceeded!\n";
        }
    }

    void displayCurrent() {
        display();
        cout << "Overdraft Limit: " << overdraftLimit << endl;

    }
};

int main() {
    int accNo;
    double balance, rate, overdraft, amount;


    cout << "Enter Savings Account Number: ";
    cin >> accNo;
    cout << "Enter Initial Balance: ";
    cin >> balance;
    cout << "Enter Interest Rate: ";
    cin >> rate;

    Savings s1(accNo, balance, rate);

    cout << "\nEnter amount to deposit in Savings: ";
    cin >> amount;
    s1.deposit(amount);

    cout << "Enter amount to withdraw from Savings: ";
    cin >> amount;
    s1.withdraw(amount);

    cout << "\nSavings Account Details:\n";
    s1.displaySavings();


    cout << "\nEnter Current Account Number: ";
    cin >> accNo;
    cout << "Enter Initial Balance: ";
    cin >> balance;
    cout << "Enter Overdraft Limit: ";
    cin >> overdraft;

    Current c1(accNo, balance, overdraft);

    cout << "\nEnter amount to deposit in Current: ";
    cin >> amount;
    c1.deposit(amount);

    cout << "Enter amount to withdraw from Current: ";
    cin >> amount;
    c1.withdraw(amount);

    cout << "\nCurrent Account Details:\n";
    c1.displayCurrent();

    return 0;
}
