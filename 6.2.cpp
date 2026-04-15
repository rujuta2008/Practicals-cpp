#include <iostream>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Employee : public Person {
protected:
    int empID;

public:
    Employee(string n, int a, int id) : Person(n, a) {
        empID = id;
    }

    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << empID << endl;
    }

    int getID() {
        return empID;
    }
};


class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int a, int id, string dept)
        : Employee(n, a, id) {
        department = dept;
    }

    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;

    }
};

int main() {

    Manager managers[2] = {
        Manager("A", 35, 101, "HR"),
        Manager("B", 40, 102, "IT")
    };

    cout << "All Managers:\n";
    for (int i = 0; i < 2; i++) {
        managers[i].displayManager();
    }


    int searchID;
    cout << "\nEnter Employee ID to search: ";
    cin >> searchID;

    bool found = false;
    for (int i = 0; i < 2; i++) {
        if (managers[i].getID() == searchID) {
            cout << "\nManager Found:\n";
            managers[i].displayManager();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Manager not found!" << endl;
    }

    return 0;
}
