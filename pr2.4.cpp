#include<iostream>
using namespace std;

class Item
{
    int itemID;
    string itemName;
    float price;
    int quantity;

public:


    Item()
    {
        itemID = 0;
        itemName = "Not Set";
        price = 0;
        quantity = 0;
    }


    Item(int id, string name, float p, int q)
    {
        itemID = id;
        itemName = name;
        price = p;
        quantity = q;
    }

    void addStock()
    {
        int q;
        cout<<"enter quantity:";
        cin>>q;
        if(q > 0)
        {
            quantity += q;
            cout << "Stock added successfully.\n";
        }
        else
        {
            cout << "Invalid quantity.\n";
        }
    }

    void sellItem()
    {
                int q;
        cout<<"enter quantity:";
        cin>>q;
        if(q <= 0)
        {
            cout << "Invalid sale quantity.\n";
        }
        else if(q > quantity)
        {
            cout << "Not enough stock available.\n";
        }
        else
        {
            quantity -= q;
            cout << "Item sold successfully.\n";
        }
    }

    void display()
    {
        cout << "\nItem ID: " << itemID;
        cout << "\nItem Name: " << itemName;
        cout << "\nPrice: " << price;
        cout << "\nQuantity in Stock: " << quantity << endl;
    }

    int getID()
    {
        return itemID;
    }
};

int main()
{
    int i=0,n;
    cout<<"enter item:";
    cin>>n;
    Item items[n];
    int choice, id, q;
    string name;
    float price;

    do
    {
        cout << "\n===== Inventory System =====";
        cout << "\n1. Add New Item";
        cout << "\n2. Add Stock";
        cout << "\n3. Sell Item";
        cout << "\n4. Display Item";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Enter Item ID: ";
            cin >> id;
            cout << "Enter Item Name: ";
            cin >> name;
            cout << "Enter Price: ";
            cin >> price;
            cout << "Enter Quantity: ";
            cin >> q;

            items[i] = Item(id, name, price, q);
            i++;
            cout << "Item added successfully.\n";
            break;

        case 2:
            cout << "Enter Item ID: ";
            cin >> id;

            for(int i = 0; i < n; i++)
            {
                if(items[i].getID() == id)
                {
                    cout << "Enter quantity to add: ";
                    cin >> q;
                    items[i].addStock();
                }
            }
            break;

        case 3:
            cout << "Enter Item ID: ";
            cin >> id;

            for(int i = 0; i < n; i++)
            {
                if(items[i].getID() == id)
                {
                    cout << "Enter quantity to sell: ";
                    cin >> q;
                    items[i].sellItem();
                }
            }
            break;

        case 4:
            cout << "Enter Item ID: ";
            cin >> id;

            for(int i = 0; i < n; i++)
            {
                if(items[i].getID() == id)
                {
                    items[i].display();
                }
            }
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while(choice != 5);

    return 0;
}
