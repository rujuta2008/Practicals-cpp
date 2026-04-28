#include <iostream>
using namespace std;


class Grading
{
protected:
    int marks;

public:
    virtual void input()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    virtual void computeGrade() = 0;
};


class Undergraduate : public Grading
{
public:
    void computeGrade()
    {
        cout << "Undergraduate Grade: ";
        if (marks >= 80)
            cout << "A" << endl;
        else if (marks >= 60)
            cout << "B" << endl;
        else if (marks >= 40)
            cout << "C" << endl;
        else
            cout << "Fail" << endl;
    }
};


class Postgraduate : public Grading
{
public:
    void computeGrade()
    {
        cout << "Postgraduate Grade: ";
        if (marks >= 85)
            cout << "A" << endl;
        else if (marks >= 70)
            cout << "B" << endl;
        else if (marks >= 50)
            cout << "C" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main()
{
    int n, choice;

    cout << "Enter number of students: ";
    cin >> n;

    Grading* s[100];

    for (int i = 0; i < n; i++)
        {
        cout << "\nStudent " << i + 1 << endl;
        cout << "1. Undergraduate\n2. Postgraduate\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
            s[i] = new Undergraduate();
        else
            s[i] = new Postgraduate();

        s[i]->input();
    }

    cout << "\n--- Grades ---\n";
    for (int i = 0; i < n; i++)
    {
        s[i]->computeGrade();
    }

    return 0;
}
