#include <stdio.h>
#include <stdlib.h>
// The swap functions 
void swap(int *a , int *b);

int main(int argc, char *argv[]){
    int x = 10;
    int y = 29;             
    printf("Before Swaping \n");
    printf(" x = %d , y = %d\n", x, y);
    printf("After Swaping \n");
    swap(&x , &y);
    printf("x = %d , y = %d \n", x, y);

   return EXIT_SUCCESS;
}

void swap(int *a , int *b){
    int x = *a;
    *a = *b;
    *b = x;
}