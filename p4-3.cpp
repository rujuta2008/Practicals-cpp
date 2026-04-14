#include<iostream>
using namespace std;


int main()
{
    int n, m;


    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter size of second array: ";
    cin >> m;


    int *arr1   = new int[n];
    int *arr2   = new int[m];
    int *arr3 = new int[n + m];


    cout << "Enter  elements of arr1: ";
    for(int i = 0; i < n; i++)
        cin >> arr1[i];


    cout << "Enter elements of arr2: ";
    for(int i = 0; i < m; i++)
        cin >> arr2[i];


    for(int i = 0; i < n; i++)
        arr3[i] = arr1[i];


    for(int i = 0; i < m; i++)
        arr3[n + i] = arr2[i];


    for(int i = 0; i < n + m - 1; i++)
    {
        for(int j = 0; j < n + m - i - 1; j++)
        {
            if(arr3[j] > arr3[j + 1])
            {
                int temp    = arr3[j];
                arr3[j]   = arr3[j + 1];
                arr3[j+1] = temp;
            }
        }
    }
    cout << "Merged Sorted Array: ";
    for(int i = 0; i < n + m; i++)
        cout << arr3[i] << " ";
    cout << endl;


    delete[] arr1;
    delete[] arr2;
    delete[] arr3;


    return 0;
}

