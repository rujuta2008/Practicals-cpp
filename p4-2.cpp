#include<iostream>
using namespace std;
class point
{
    public:
    int x,y;
    point(int value1,int value2)
    {
        x=value1;
        y=value2;
    }
    point &move(int dx,int dy)
    {
       x=x+dx;
       y=y+dy;
       return *this;
    }
    void display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
void shiftpoint(point *p,int dx,int dy)
    {
        p->move(dx,dy);
    }
int main()
{
    point p(2,5);
    p.move(3,4).move(1,2);
    cout<<"After Chaining:";
    p.display();
    shiftpoint(&p,6,3);
  cout << "After pointer function: ";
    p.display();
    return 0;
}
