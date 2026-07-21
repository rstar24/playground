#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

void swap(int &a , int &b) {
    a ^= b ;
    b ^= a ; 
    a ^= b ;

    return;
}


void bubble_sort(vector<int> &ar){

  int n = ar.size();

  for (int i = 0 ; i < n ;i++ ) {
      for (int j = 0 ; j < n-1 ;j++){
          if (ar[j] > ar[j+1]){
              swap(ar[j],ar[j+1]);
          }
      }
  }
  return ;
}


int main(){

  // Doing some of bubble sort 

  vector<int> arr = {4,3,2,1 };


  cout<< arr.size()<< endl;

  for(auto x : arr) {
      cout << x << " "; 
  }
  cout << endl;
  
  bubble_sort(arr);
 
  for(auto x : arr){
      cout << x << " "; 
  }

  cout << endl;
  reverse(arr.begin(), arr.end());

  for(auto x : arr){
      cout << x << " "; 
  }
  cout << endl;

  random_shuffle(arr.begin(), arr.end());

  for(auto x : arr){
      cout << x << " "; 
  }
  cout << endl;
  sort(arr.begin(), arr.end());

  for(auto x : arr){
      cout << x << " "; 
  }
  cout << endl;
  return 0;
}

