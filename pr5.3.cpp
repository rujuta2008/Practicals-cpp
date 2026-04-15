#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


class Item {
public:
    char name[50];
    int quantity;
    float price;


    void input() {
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price: ";
        cin >> price;
    }


    void displaydetails() {
        cout << "Name: " << name
             << ", Quantity: " << quantity
             << ", Price: " << price << endl;
    }
};


int main() {
    int choice;
    Item item;


    while (true) {
        cout << "--- Inventory Menu ---"<<endl;
        cout << "1. Add Item" <<endl;
        cout << "2. View All Items" <<endl;
        cout << "3. Search Item by Name"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;


        if (choice == 1) {
            ofstream fout("inventory.txt", ios::app);
            item.input();
            fout << item.name << " " << item.quantity << " " << item.price << endl;
            fout.close();
        }


        else if (choice == 2) {
            ifstream fin("inventory.txt");
            char name[50];
            int quantity;
            float price;


            cout << "\n--- Inventory Items ---\n";
            while (fin >> name >> quantity >> price) {
                cout << "Name: " << name << endl;
                cout<< " Quantity: " << quantity <<endl;
                cout << " Price: " << price << endl;
            }
            fin.close();
        }


        else if (choice == 3) {
            ifstream fin("inventory.txt");
            char searchName[50];
            char name[50];
            int quantity;
            float price;
            bool found = false;


            cout << "Enter item to search: ";
            cin >> searchName;


            while (fin >> name >> quantity >> price) {
                if (strcmp(name, searchName) == 0) {
                    cout << "Item Found!\n";
                    cout << "Name: " << name
                         << ", Quantity: " << quantity
                         << ", Price: " << price << endl;
                    found = true;
                    break;
}
            }


            if (!found) {
                cout << "Item not found!"<<endl;
            }


            fin.close();
        }


        else if (choice == 4) {
            cout << "Exit"<<endl;
            break;
        }


        else {
            cout << "Invalid choice!"<<endl;
        }
    }


    return 0;
