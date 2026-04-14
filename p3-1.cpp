#include <iostream>
using namespace std;

class Employee
{
    string name;
    float basicSalary;
    float bonus;

public:

    Employee()
    {
        name = " ";
        basicSalary = 0;
        bonus = 2000;
    }


    void input()
    {
        int choice;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Custom Bonus? (1-Yes / 0-No): ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Bonus: ";
            cin >> bonus;
        }

    }


    inline float totalSalary()
    {
        return basicSalary + bonus;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nBonus: " << bonus;
        cout << "\nTotal Salary: " << totalSalary();
    }
};

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];

    for(int i=0; i < n; i++)
    {
        cout << "\nEnter details for Employee " << i + 1 << endl;
        emp[i].input();
    }



    for(int i = 0; i < n; i++)
    {
        emp[i].display();
    }

    return 0;
}
