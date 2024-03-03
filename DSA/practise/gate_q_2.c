#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 10;
    int c[3] = {10,20,30};
    int *b = &a;
    /*& and * are complement of each other*/     
    printf("%d\n", *(&a));
    /* Behaves a the complement of each other & and * */
    printf("%d\n",*&*&*&*&a);
    /* Prints the garbage values */
    printf("%d\n%d\n%d\n",c[0],c[1],c[2]);  
    /*  the %p access specifier */
    printf("%p\n",b);
    printf("%u\n",a);
    /* Trying another tricky form of array notations */
    printf("%d\n",0[c]);

    return 0;
}