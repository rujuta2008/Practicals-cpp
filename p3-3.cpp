#include<iostream>
using namespace std;

class digitalaccount
{
    public:
    int no;
    string name;
    float balance;

    void create()
    {
        cout<<"enter the number of your account";
        cin>>no;
        cout<<"enter your name";
        cin>>name;
        cout<<"enter the balance you want to use";
        cin>>balance;

    }
    void display()
    {
        cout<<"your account number is"<<no<<"\n";
        cout<<"your name is"<<name<<"\n";
        cout<<"your balance is"<<balance<<"\n";

    }

};

static int totalaccount=0;

int main()
{
    digitalaccount account[50];
    int count=0;
    int choice;

    do
    {

    cout<<"1) add account\n";
    cout<<"2) display account\n";
    cout<<"3) transfer money\n";
    cout<<"4) display total account\n";
    cout<<"5) exit";

    cout<<"your choice";
    cin>>choice;


    if(choice==1)
    {
        account[count].create();
        count++;
        cout<<"account added";
        totalaccount++;
    }
    else if(choice==2)
    {
        for(int i=0;i<count;i++)
        {
            account[i].display();
        }
    }
    else if(choice==3)
    {
        int from,to;
        double amount;


        cout<<"enter the sender account";
        cin>>from;
        cout<<"enter the reciver account";
        cin>>to;
        cout<<"enter the amount";
        cin>>amount;

        int fromi=0,toi=0;
        for( int i=0;i<count;i++)
        {
            if(account[i].no==from)
            {
                fromi=i;
            }
            if(account[i].no==to)
            {
                toi=i;
            }

        }
        if(fromi==0  || toi==0)
        {
            cout<<"account not found";

        }
        else if (account[fromi].balance < amount)
        {
            cout<<"insufficient balance";
        }
        else
        {
            account[fromi].balance -= amount;
            account[toi].balance += amount;
            cout<<"success";
        }

    }

    else if(choice==4)
    {
        cout<<"the total accounts are";
        cout<<totalaccount;
    }

    }while(choice!=5);
return 0;
}
