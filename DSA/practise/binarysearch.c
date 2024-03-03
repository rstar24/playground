#include <stdio.h>
#include <stdlib.h>

// C program to implement binary search function

int binarySearch(int arr[],int l,int r ,int x){
    while (l <= r)
    {
        int m = l + (r-l) / 2;

        // Check if x is present at med
        if(arr[m] == x){
            return m;
        }
        // If x greater, ignore left half
        if(arr[m] < x ){
            l = m + 1;
        }
        // If x is smaller,ignore right half
        else {
            r = m - 1 ;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int result = binarySearch(arr,0,n-1,x);
    (result == -1 ) ? printf("Element is not present in array\n")
                    : printf("Elmenet is present in array at %d", result);


    return 0;
}