#include <iostream>
using namespace std;

class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    float add(int a, float b)
    {
        return a + b;
    }

    float add(float a, int b)
    {
        return a + b;
    }
};

int main() {
    Calculator calc;

    int result1 = calc.add(5, 3);
    float result2 = calc.add(2.5f, 4.5f);
    float result3 = calc.add(5, 2.5f);
    float result4 = calc.add(3.5f, 2);

    cout << "Addition of two integers: " << result1 << endl;
    cout << "Addition of two floats: " << result2 << endl;
    cout << "Addition of int and float: " << result3 << endl;
    cout << "Addition of float and int: " << result4 << endl;

    return 0;
}
