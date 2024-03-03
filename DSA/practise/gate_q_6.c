#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 5;
    while(--i){
        printf("%d",i);
    }
    i = 5;
    printf("\n");
    while(i--){
        printf("%d",i);
    }
    return 0;
}