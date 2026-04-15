#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


ostream& currency(ostream& os) {
    os << "Rs.";
    return os;
}


int main() {
    string names[] = {"Aarav", "Priya", "Rahul", "Sneha"};
    float marks[]  = {88.5, 92.0, 75.3, 85.7};
    float fees[]   = {45000, 50000, 40000, 47000};
    int n = 4;


    cout << setfill('-') << setw(55) << "" << endl;
    cout << setfill(' ');
    cout << setw(5)  << "No."
         << setw(12) << "Name"
         << setw(12) << "Marks"
         << setw(15) << "Fees" << endl;
    cout << setfill('-') << setw(55) << "" << endl;
    cout << setfill(' ');


    for (int i = 0; i < n; i++) {
        cout << setw(5)  << i + 1
             << setw(12) << names[i]
             << setw(12) << fixed << setprecision(2) << marks[i]
             << setw(8)  << currency << fees[i] << endl;
    }
    cout << setfill('-') << setw(55) << "" << endl;
    return 0;
}
