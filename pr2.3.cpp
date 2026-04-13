#include<iostream>
using namespace std;

class account
{
    int id;
    string name;
    float balance;

public:
    void createacc()
    {
        float initialbal;
        cout<<"enter id:";
        cin>>id;
        cout<<"\nenter name:";
        cin>>name;
        cout<<"\nenter initial balance:";
        cin>>initialbal;
        if(initialbal>=0)
        {
            balance=initialbal;
        }
        else
        {
            balance=0;
        }
    }
    void deposite()
    {
        float amount;
        cout<<"\nenter amount:";
        cin>>amount;
        if(amount>0)
        {
            balance=balance+amount;
            cout<<"deposite money successfully.";
        }
        else
        {
            cout<<"invalide deposite amount";
        }

    }
    void withdraw()
    {
        float amount;
        cout<<"enter withdraw amount:";
        cin>>amount;
        if(amount <= 0)
        {
            cout << "Invalid withdrawal amount!\n";
        }
        else if(amount > balance)
        {
            cout << "Insufficient balance! Withdrawal denied.\n";
        }
        else
        {
            balance=balance-amount;
            cout << "Withdrawal successful!\n";
        }
    }
    void display()
    {
        cout<<"\nname:"<<name;
        cout<<"\nid:"<<id;
        cout<<"\nbalance:"<<balance;

    }
    int getid()
    {
        return id;
    }


};

int main()
{
    int n,i,id;
    cout<<"how many account you want:";
    cin>>n;
    account a[n];
    int c;

    do
    {
        cout<<"1.create account\n 2.deposite money\n 3.wihdraw money \n4.diplay\n5.exit";
        cout<<"\nenter choice:";
        cin>>c;

        switch(c)
        {
        case 1:
            for(i=0;i<n;i++)
            {
                a[i].createacc();
            }
            break;
        case 2:
            for(i=0;i<n;i++)
            {
                cout<<"enter account id:";
                cin>>id;
                if(a[i].getid()==id)
                {
                   a[i].deposite();
                }

            }
            break;
             case 3:
            for(i=0;i<n;i++)
            {
                cout<<"enter account id:";
                cin>>id;
                if(a[i].getid()==id)
                {
                   a[i].withdraw();
                }

            }
            break;

        case 4:
            for(i=0;i<n;i++)
            {
                a[i].display();
            }
            break;
        }
    }while(c!=5);

return 0;
}

