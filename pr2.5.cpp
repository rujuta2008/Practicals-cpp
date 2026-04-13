#include<iostream>
using namespace std;

class loan
{
    int loanID;
    string name;
    double amount;
    double annualRate;
    int tenure;
    double emi;

    public:


    loan()
    {
        loanID = 0;
        name = "Not Set";
        amount = 0;
        annualRate = 0;
        tenure = 0;
        emi = 0;
    }
    loan(int id, string n, double amt, double rate, int t)
    {
        loanID = id;
        name = n;
        amount = amt;
        annualRate = rate;
        tenure = t;
        calculateEMI();
    }

    void calculateEMI()
    {
        double R = annualRate / (12 * 100);
        double N = tenure;

        double power = 1;
        for(int i = 0; i < N; i++)
        {
            power = power * (1 + R);
        }
        if(R == 0)
        {
            emi = amount / N;
        }
        else
        {
            emi = (amount * R * power) / (power - 1);
        }
    }
    void display()
    {
        cout << "\nLoan ID: " << loanID;
        cout << "\nApplicant Name: " << name;
        cout << "\nLoan Amount: " << amount;
        cout << "\nAnnual Interest Rate: " << annualRate << "%";
        cout << "\nTenure (Months): " << tenure;
        cout << "\nMonthly EMI: " << emi << endl;
    }

};

int main()
{
    loan l1(101, "Rujuta", 500000, 8.5, 60);
    l1.display();

    return 0;
}
