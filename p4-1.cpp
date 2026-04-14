
#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL;
    int n,m;
    int count=0;
  while(1)
  {
     cout<<"Enter your choice:";
  cin>>n;
  switch(n)
  {
    case 1:
   cout<<"Enter the number you want to insert:";
    cin>>m;
    int *temp =new int[count+1];
    for(int i=0;i<count;i++)
    {
        temp[i]=arr[i];
    }
    temp[count]=m;
    delete[] arr;
    arr=temp;
    count++;
    cout<<"Inserted Number is: "<<m<<endl;
    break;
    case 2:
    int position;
    cout << "Enter position to delete: ";
    cin >> position;

    if(position < 0 || position >= count)
    {
        cout << "Invalid position!" << endl;
        break;
    }

    int *temp = new int[count-1];

    for(int i = 0; i < position; i++)
        temp[i] = arr[i];

    for(int i = position; i < count-1; i++)
        temp[i] = arr[i+1];

    delete[] arr;
    arr = temp;
    count--;
    cout << "Element deleted at position: " << position << endl;
    break;
    case 3:
      cout<<"Array Elements:";
      for(int i=0;i<count;i++)
      {
        cout<<arr[i]<<endl;
      }
      default:
      cout<<"Invalid Input:"<<endl;
  }
}
    return 0;
}
