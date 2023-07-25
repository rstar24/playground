#include <iostream>
#include "name.h"
using namespace std;

int factorial(int value)
{
    int fact = 1;

    for (int i = value; i > 0; i--)
        fact = fact * i;

    return fact;
}

int main()
{
    int num = 5;
    printDetails();
    cout << "Factorial of " << num << " is " << factorial(num);

    return 0;
}