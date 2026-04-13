#include<iostream>
using namespace std;

class wallet
{
private:
    int id;
    string name;
    float balance = 0;

public:

    void loadmoney()
    {
        cout<<"Enter your id: ";
        cin>>id;

        cout<<"Enter your name: ";
        cin>>name;

        float amount;
        cout<<"Enter amount you want to load: ";
        cin>>amount;

        balance = balance + amount;
        cout<<"Money loaded successfully\n";
    }

    void transfer()
    {
        int transfer_id;
        float amount;

        cout<<"Enter transfer id: ";
        cin>>transfer_id;

        cout<<"Enter amount you want to transfer: ";
        cin>>amount;

        if(amount <= balance)
        {
            balance = balance - amount;
            cout<<"Money transferred successfully\n";
        }
        else
        {
            cout<<"Insufficient balance\n";
        }
    }

    void display()
    {
        cout<<"\nAccount id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Your balance: "<<balance<<endl;
    }

};

int main()
{
    wallet w1;

    w1.loadmoney();
    w1.transfer();
    w1.display();

    return 0;
}
