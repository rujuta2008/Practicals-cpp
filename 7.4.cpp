#include <iostream>
using namespace std;

class Shape {
public:
    virtual void input() = 0;
    virtual void Area() = 0;
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void Area() {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    void input() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void Area() {
        float area = 3.14 * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }
};

int main() {
    Shape* shapes[100];
    int n, choice;

    cout << "Enter number of shapes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nShape " << i + 1 << endl;
        cout << "1. Rectangle\n2. Circle\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
            shapes[i] = new Rectangle();
        else
            shapes[i] = new Circle();

        shapes[i]->input();
    }

    cout << "\n--- Areas ---\n";
    for (int i = 0; i < n; i++) {
        shapes[i]->Area();
    }

    return 0;
}
