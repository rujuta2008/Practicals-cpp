#include <iostream>
using namespace std;

class Fahrenheit; // forward declaration

class Celsius {
public:
    float temp;

    Celsius(float t = 0) {
        temp = t;
    }

    // Celsius → Fahrenheit
    operator Fahrenheit();

    bool operator==(Celsius c) {
        return temp == c.temp;
    }
};

class Fahrenheit {
public:
    float temp;

    Fahrenheit(float t = 0) {
        temp = t;
    }

    // Fahrenheit → Celsius
    operator Celsius() {
        return Celsius((temp - 32) * 5 / 9);
    }
};

// Conversion definition
Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9 / 5) + 32);
}

int main() {
    // --- Conversion ---
    Celsius c1(25);
    Fahrenheit f1 = c1;

    cout << "25 C = " << f1.temp << " F\n";

    // --- Back conversion ---
    Celsius c2 = f1;
    cout << f1.temp << " F = " << c2.temp << " C\n";

    // --- Comparison ---
    if (c1 == c2)
        cout << "Equal temperatures\n";
    else
        cout << "Not equal\n";

    // --- Array storage ---
    Celsius arr[3] = {10, 20, 30};

    cout << "\nArray values (C to F): ";
    for (int i = 0; i < 3; i++) {
        Fahrenheit f = arr[i];
        cout << f.temp << " ";
    }

    return 0;
}
