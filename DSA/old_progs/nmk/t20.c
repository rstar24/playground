#include <stdio.h>
#include <stdlib.h>

void sort(int a[]){
    int n = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        if(a[i] > a[i+1]){
            swap(&a[i],&a[i+1]);
        }
        else if (a[i] < a[i+1]){
            continue;
        }
    }
}

void swap(int *a ,int *b){
    int x = *a ;
    *a = *b ;
    *b = x;
}

int main(int argc, char *argv[]){
    printf("This is from Suman Halder's Book\n");
    int x[10] = { 6,4,5,4}; 
    printf("Before Sorting:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",x[i]);
    }
    sort(x);
    printf("\n");
    printf("After Sorting:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",x[i]);
    }

    printf("\n");
   return EXIT_SUCCESS;
}