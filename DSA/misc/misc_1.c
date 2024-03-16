#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printf("%d\n",a);
    printf("%d\n",*a);
    printf("%d\n",**a+1);
    printf("%d\n",&a);
    printf("%d\n",a+1);
    printf("%d\n",a[0]+1);
    printf("%d\n",&a+1);
    printf("The size of int %d",sizeof(int));

    
    return 0;
}