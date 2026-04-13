#include<iostream>
using namespace std;

class rectangle
{
    float lenght;
    float width;
public:
    void area()
    {
        float area;
        cout<<"enter lenght:";
        cin>>lenght;
        cout<<"enter widht:";
        cin>>width;
        area=lenght*width;
        cout<<"area is:"<<area;
    }
    void parameter()
    {
        float parameter;

        parameter=2*(lenght+width);
        cout<<"parameter is:"<<parameter;
    }
};

int main()
{
    int n,i;
    cout<<"enter number of rectangle you want to add:";
    cin>>n;
    rectangle r[n];

    for(i=0;i<n;i++)
    {
      r[i].area();
      r[i].parameter();
    }

    return 0;
}
