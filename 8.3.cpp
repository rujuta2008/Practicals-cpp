#include <iostream>
using namespace std;

string logArr[10];
int k = 0;
void add(string s)
{
     logArr[k++] = s;

}

class Bank
{
    int bal;
public:
    Bank(int b)
    {
        bal = b;
    }
    void withdraw(int amt)
    {
        add("withdraw()");
        if(amt > bal) throw "Error";
        bal -= amt;
    }
};

void f2(Bank &b)
{
    add("f2()");
     b.withdraw(200);
     add("end f2");
}
void f1(Bank &b)
{
     add("f1()");
     f2(b);
      add("end f1");
}

int main()
{
    try
    {
        Bank b(100);
        f1(b);
    }
    catch(const char*)
    {
        add("Exception caught");
    }

    for(int i=0;i<k;i++)

    cout<<logArr[i]<<endl;
}
