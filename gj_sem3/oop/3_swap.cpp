#include <iostream>
#include "name.h"
using namespace std;

int main()
{
    int x = 14, y = 17, z;
    printDetails();
    cout << "Before swaping " << x << " , " << y << endl;

    z = x;
    x = y;
    y = z;

    cout << "After swaping " << x << " , " << y;

    return 0;
}