#include <bits/stdc++.h>
using namespace std;

// declaration
void myQuickSort(vector<int> &arr,int p,int q);

void partition(vector<int> &arr);

void mySwap(vector<int> &arr,int a ,int b);

int main(){
    // This is the vector that has
    // to be sort sorted using the 
    // quick sort algorithm
    vector<int> arr = {65,70,75,80,85,60,55,50,45};
    int sz = arr.size();

    cout << "Before sorting "<< endl;
    for(auto x: arr){
        cout << x << " ";
    }
    cout<< endl;
    cout<< endl;

    myQuickSort(arr,0,sz-1);


    cout<< endl;
    cout << "After sorting "<< endl;
    for(auto x: arr){
        cout << x << " ";
    }
    cout<< endl;

    return 0;
}

void mySwap(vector<int> &arr,int a ,int b){
    int c = arr[a] ;
    arr[a] = arr[b];
    arr[b] = c;
}

int partition(vector<int> &arr, int m ,int p){

    int v = arr[m];
    int i = m+1;
    int j = p;

    while(true){
        while (i <= p && arr[i] <= v) i++;
        while (j >= m && arr[j] > v) j--;

        if (i >= j) break;
        mySwap(arr,i,j);
        cout << "Small swaps"<< endl;
        for(auto x: arr){
            cout << x << " ";
        }
    cout<< endl;
        
    }

    cout << "Pivot is Here" << endl;
    mySwap(arr,m,j);
    cout << "Step"<< endl;
    for(auto x: arr){
        cout << x << " ";
    }
    cout<< endl;

    return j;
}

// Defination
void myQuickSort(vector<int> &arr,int p,int q){

    if (p<q) {
        int j = partition(arr,p,q);
        myQuickSort(arr,p,j-1);
        myQuickSort(arr,j+1,q);
    }

    return ;
}