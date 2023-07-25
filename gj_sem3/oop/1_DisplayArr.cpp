#include <iostream>
#include "name.h"
using namespace std;

int main()
{
    int arr[] = {8, 5, 7, 2, 3};

    printDetails();
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}