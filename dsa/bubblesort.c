#include <stdio.h>
#include <stdlib.h>
// c program for the implementation of bubble sort
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// a function for implementation of bubble sort
void bubblesort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void printarray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {1,2,3,4,5,2,5,2,6,4,0,8,1};
    int z = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, z);
    printf("Sorted Array \n");
    printarray(arr, z);
    return 0;
}