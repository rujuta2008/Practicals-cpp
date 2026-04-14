#include<iostream>
using namespace std;

int recursive(int a[], int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return a[n-1] + recursive(a,n-1);
    }

}

int iterative(int a[], int n)
{
    int sum =0,i;
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    int n,s1,s2;
    cout<<"enter the size of an array\n";
    cin>>n;
    int a[50];


    cout<<"enter the elements in the array";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    s1=recursive(a,n);
    s2=iterative(a,n);

    cout<<"the recursive is"<<s1<<"\n";
    cout<<"the iterative is"<<s2<<"\n";



    return 0;


}
