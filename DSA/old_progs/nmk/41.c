#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    
    int *a;
    a = (int*)malloc(10*sizeof(int));
    if(a == NULL){
        printf("Not allocated\n");
    }
    
    for (int  i = 0; i < 10; i++)
    {
        a[i] = i;
        printf("%d\n",a[i]);
    }
    

    return EXIT_SUCCESS;
}