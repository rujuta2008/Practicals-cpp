#include<iostream>
using namespace std;

class student
{
    int rollno;
    string name;
    int m1,m2,m3;
    float avg;

public:

    student()
    {
        rollno=0;
        name=" ";
        m1,m2,m3=0;
    }
    student(int r,string n,int M1,int M2,int M3)
    {
        rollno=r;
        name=n;
        m1=M1;
        m2=M2;
        m3=M3;
    }
    void inputdata()
    {
        cout<<"enter student rollno:";
        cin>>rollno;
        cout<<"enter student name:";
        cin>>name;
        cout<<"enter student marks:";
        cin>>m1>>m2>>m3;

    }
    void diplay()
    {
        avg=(m1+m2+m3)/3;
        cout<<"avarage is:"<<avg;


    }
};
int main()
{
    int i,n;
    cout<<"enter number of students data you want to enter:";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++)
    {
        s[i].inputdata();
        s[i].diplay();
    }
    return 0;
}
