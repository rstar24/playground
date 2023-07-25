#include <stdio.h>
#include <stdlib.h>

int z=10; //Global Declaration


int main(void)
{
    int x; //Declaration
    x = 10; //Initialization

    if (x == 10)
    {
        printf("This is z : %d\n",z);
        int x;
        x = 99;
        printf("Inner x: %d\n", x);
    }

    printf("Outer x: %d\n",x);

    return 0;
}