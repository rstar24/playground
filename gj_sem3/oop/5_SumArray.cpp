#include <iostream>
#include "name.h"
using namespace std;

int main()
{
    int arr[] = {8, 2, 7, 5, 3};
    int sum = 0;

    for (int i = 0; i < 5; i++)
        sum = sum + arr[i];

    printDetails();
    cout << "Array elements are : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nSum of elements of array is : " << sum << endl;
    return 0;
}