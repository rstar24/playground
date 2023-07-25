#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int myfunc(int x){

    int z=((2*x)-1);
    for(int i;i<z;i++){
        printf("%d ",x);
    }

    return x;
}

int main()
{

    int f ;
    // scanf("%d ", f);
    myfunc(5);

    return 0;
}