#include <iostream>
#include "name.h"
using namespace std;

int main()
{
    int n;
    printDetails();
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element:  ";
        cin >> arr[i];
    }
    cout << "Array elements are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}