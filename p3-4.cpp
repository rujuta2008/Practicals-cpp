#include <iostream>
using namespace std;

template <class T>
void display(T arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template <class T>
T findMax(T arr[], int n) {
    T max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

template <class T>
void reverseArray(T arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        T temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

template <class T>
void printLeaders(T arr[], int n) {
    T maxFromRight = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            cout << maxFromRight << " ";
        }
    }
    cout << endl;
}

int main() {
    int intArr[] = {16, 17, 4, 3, 5, 2};
    float floatArr[] = {2.5, 7.1, 3.3, 1.9};
    char charArr[] = {'a', 'd', 'c', 'b'};

    int n1 = 6, n2 = 4, n3 = 4;

    cout << "Integer Array: ";
    display(intArr, n1);
    cout << "Maximum: " << findMax(intArr, n1) << endl;
    printLeaders(intArr, n1);
    reverseArray(intArr, n1);
    cout << "Reversed: ";
    display(intArr, n1);

    cout << endl;

    cout << "Float Array: ";
    display(floatArr, n2);
    cout << "Maximum: " << findMax(floatArr, n2) << endl;
    printLeaders(floatArr, n2);
    reverseArray(floatArr, n2);
    cout << "Reversed: ";
    display(floatArr, n2);

    cout << endl;

    cout << "Character Array: ";
    display(charArr, n3);
    cout << "Maximum (ASCII): " << findMax(charArr, n3) << endl;
    printLeaders(charArr, n3);
    reverseArray(charArr, n3);
    cout << "Reversed: ";
    display(charArr, n3);

    return 0;
}
