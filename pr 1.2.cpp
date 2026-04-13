#include<iostream>
using namespace std;

class book
{
private:

    int id;
    string title;
    string author;
    int copy;

    public:
        void addbook()
        {
            cout<<"enter book id:";
            cin>>id;
            cout<<"enter book title:";
            cin>>title;
            cout<<"enter book athor name:";
            cin>>author;
            cout<<"enter number of copies available:";
            cin>>copy;

        }
        int getid()
        {
            return id;
        }
     void issuebook()
     {
         if(copy>0)
         {
             copy--;
             cout<<"book issued succesfully.";

         }
         else
         {
             cout<<"copy is not available.";
         }
     }

     void returnbook()
     {
         copy++;
         cout<<"book return sucessfully.";

     }

};

int main()
{
    int c,id;
    int totalbook=0;
    book b;


    do
    {
        cout<<"1.add book\n 2.issue book\n 3.returnbook\n 4.display totalbook\n 5.exit \n enter choice ";
        cin>>c;

        switch(c)
        {
        case 1:

              b.addbook();
              totalbook++;
              break;

        case 2:

                int i;
                cout<<"enter book id no.:";
                cin>>id;
                for(i=0;i<totalbook;i++)
                {
                    if(b.getid()==id)
                    {
                        b.issuebook();
                        break;
                    }
                }
                break;


            case 3:


                cout<<"enter book id no.:";
                cin>>id;
                for(i=0;i<totalbook;i++)
                {
                    if(b.getid()==id)
                    {
                        b.returnbook();
                        break;
                    }
                }
                break;

            case 4:

                cout<<"Total Books in Library: "<<totalbook<<endl;
                break;

            case 5:
                cout<<"Exiting...";
                break;

            default:
                cout<<"Invalid Choice!";


            }

        }while(c!=5);
        return 0;
    }
