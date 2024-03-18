#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[3][2][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    printf("size of int %u\n",sizeof(int)); 
    printf("a = %u\n",a);
    printf("a[0] = %u\n",a[0]);
    printf("&a[0] = %u\n",a[0][0]);
    printf("&a = %u\n",&a);
    printf("a[0][0][0] = %u\n",a[0][0][0]); 
    printf("a + 1 = %u\n",a+1);
    printf("a[0] + 1 = %u\n",a[0] + 1);
    printf("a[0][0] + 1 = %u\n",a[0][0] + 1);
    printf("&a + 1 = %u\n",&a + 1);
    printf("a[0][0][0] + 1 = %u\n",a[0][0][0] + 1);
    printf("*a = %u\n",*a);
    printf("**a = %u\n",**a);
    printf("***a = %u\n",***a);
    printf("***a = %u\n",***a);
    printf("***a + 1 = %u\n",***a + 1);
    printf("*a[0] + 1 = %u\n",*a[0] + 1);
    printf("**a[0] + 1 = %u\n",**a[0] + 1);

    
    

    return 0;
}
