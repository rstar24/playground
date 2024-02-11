#include <bits/stdc++.h>
using namespace std;
// To reverse an array
// To find a maximum and minimum element in a array

int main(int argc, char *argv[]){
    int arr[] = {100,938,22309,2039,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result[size];

    for (int i = 0; i < size; i++)
    {
        result[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        result[i] = arr[size-1-i];
    }

    for (int  i = 0; i < size; i++)
    {
        printf("%d ",result[i]);
    }

    return 0;
}


