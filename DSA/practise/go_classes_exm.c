#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Rishabh is doign some revision\n");

    int n = -9;

    printf("%d\n", n);
    printf("%u\n", n);


    // All of the below defination are 
    // same 
    //short int x = 9;
    //short x = 9 ;
    short signed int x = -9;
    int  y = x;

    printf("%u\n", x);

    printf("%u\n", y);

    // Think here what really happened
    signed char a = 300;

    printf("%u\n", a);
    printf("%d\n", sizeof(int));
    
    int p = 20;
    int r = 30;

    printf("%d%d\n", p<<2>>4,r<<2>>4);

    return 0;
}
