#include <iostream>
using namespace std;


class Fuel {
protected:
    string fuelType;

public:
    Fuel(string f) {
        fuelType = f;
    }
};


class Brand {
protected:
    string brandName;

public:
    Brand(string b) {
        brandName = b;
    }
};


class Car : public Fuel, public Brand {
private:
    int carID;

public:
    Car(int id, string f, string b)
        : Fuel(f), Brand(b) {
        carID = id;
    }

    void displayCar() {
        cout << "Car ID: " << carID << endl;
        cout << "Brand: " << brandName << endl;
        cout << "Fuel Type: " << fuelType << endl;

    }

    int getID() {
        return carID;
    }
};

int main() {

    Car cars[5] = {
        Car(1, "Petrol", "Toyota"),
        Car(2, "Diesel", "Hyundai"),
        Car(3, "Electric", "Tesla"),
        Car(4, "Petrol", "Honda"),
        Car(5, "Diesel", "Ford")
    };

    cout << "All Cars:\n";
    for (int i = 0; i < 5; i++) {
        cars[i].displayCar();
    }

    int searchID;
    cout << "\nEnter Car ID to search: ";
    cin >> searchID;

    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (cars[i].getID() == searchID) {
            cout << "\nCar Found:\n";
            cars[i].displayCar();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Car not found!" << endl;
    }

    return 0;
}
