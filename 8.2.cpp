#include <iostream>
#include <cmath>
using namespace std;

// Custom exception class
class NegativeNumberException {
public:
    void message() {
        cout << "Error: Negative number entered! Cannot calculate square root." << endl;
    }
};

int main() {
    double num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        // Check immediately after input
        if (num < 0) {
            throw NegativeNumberException();
        }

        // Compute square root if valid
        cout << "Square root = " << sqrt(num) << endl;
    }
    catch (NegativeNumberException e) {
        e.message();
    }

    return 0;
}
