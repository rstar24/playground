#include <stdio.h>
#include <stdlib.h>
// the difference in the post increment and/
// preincrement
//Increment or decrement both produce same result 
//it differs in method how it happens 
int main()
{
    int x=20;
    int y=x++;

    printf("%d",y);
    printf("\n");
    printf("%d",x);
    int z=++x;
    printf("\n");
    printf("%d",z);
    int a=x++;
    printf("\n");
    printf("%d",a);
    int b=++x;
    printf("\n");
    printf("%d",b);
    return 0;
}