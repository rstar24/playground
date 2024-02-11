#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start,int end);
void quicksort(int arr[],int start,int end);

int main(int argc, char *argv[]){
    
    return 0;
}

int partition(int arr[], int start,int end){
    int pivot = arr[start];
    int count = 0;
    for(int i = start + 1; i <= end;i++){
        if(arr[i] <= pivot)
            count++;
    }

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;

    while( i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot ){
            j--;
        }
        
        if ( i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quicksort(int arr[],int start,int end){
    if (start >= end){
        return;
    }
}