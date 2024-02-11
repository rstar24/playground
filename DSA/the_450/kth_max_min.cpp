#include <bits/stdc++.h>
using namespace std;

void kminmax(int ar[],int k,int size);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

int main(int argc, char *argv[]){

    int arr[] = {12,3,2,34,52,14};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting"<<endl;
    printArray(arr,size);
    bubbleSort(arr,size);
    cout<<""<<endl;
    cout<<"After Sorting"<<endl;
    printArray(arr,size);
    cout<<""<<endl;
    kminmax(arr,3,size);
    
    return 0;
}

void kminmax(int ar[],int k,int size){
    int temp = size-k;
    cout << k <<"th min = "<< ar[k-1]<<endl;
    cout << k <<"th max = "<< ar[temp]<<endl;
}


void printArray(int arr[], int size){
    int i ;
    for(i = 0 ; i < size; i++)
        cout << " " << arr[i];
}

void bubbleSort(int arr[],int n){
    int i ,j;
    bool swapped;
    for(i = 0 ;i < n-1 ; i++){
        swapped = false;
        for(j = 0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}