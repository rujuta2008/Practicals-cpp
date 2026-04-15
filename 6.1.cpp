#include <iostream>
using namespace std;


class Shape {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }
};


class Circle : public Shape {
public:
    double getArea() {
        double r = getRadius();
        return 3.14159 * r * r;
    }
};

int main() {
    int n;

    cout << "Enter number of circles: ";
    cin >> n;

    Circle circles[100];
    for (int i = 0; i < n; i++) {
        double r;
        cout << "Enter radius for circle " << i + 1 << ": ";
        cin >> r;
        circles[i].setRadius(r);
    }


    cout << "\nAreas of circles:\n";
    for (int i = 0; i < n; i++) {
        cout << "Circle " << i + 1 << " Area = "
             << circles[i].getArea() << endl;
    }

    return 0;
}
