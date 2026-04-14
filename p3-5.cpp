
#include <iostream>
using namespace std;

int superDigit(long long num)
{

    if (num < 10)
        return num;

    long long sum = 0;


    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }


    return superDigit(sum);
}

int main()
{
    string n;
    int k;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter k: ";
    cin >> k;

    long long initialSum = 0;


    for (char c : n)
    {
        initialSum += (c - '0');
    }


    long long total = initialSum * k;


    int result = superDigit(total);

    cout << "Super Digit: " << result << endl;

    return 0;
}
