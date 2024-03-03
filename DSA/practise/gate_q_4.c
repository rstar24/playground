#include <stdio.h>
#include <stdlib.h>

int main(){
    /* testing for output */
    int a[5] = {10,20,30,40,50};
    printf("%d\n",a);
    printf("%p\n",a);
    printf("%u\n",a);
    printf("%d\n",*&a);

    if(!NULL){
        printf("I am going to HAWAI\n");
    }
    return 0;
}