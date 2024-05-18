#include <bits/stdc++.h>
using namespace std;
 
int compare(const void* a, const void *b );
 
int main(){
 
  int a,c;
  cin >> a;
  int b[a];
  for(int i = 0; i < a; i++){
    if (i == (a-1)){
      b[i] = 0;
    }
    int x ;
    cin >> x;
    b[i] =x;
  }
 
  
 
  qsort(b,a,sizeof(int),compare);
 
  // for(int i = 0 ;i < a; i++){
  //   cout << b[i] << " ";
  // }
  
  for(int i = 1 ; i < a+1 ; i++){
    if(binary_search(b, (b+a), i)){}
    else { 
      cout << "\n" << i << "\n"; 
      break;
    }
  }
 
  
 
 
  cout << "\n";
  return 0;
}
 
int compare(const void* a, const void *b ){
  int* x = (int*) a;
  int* y = (int*) b;
 
  if (*x > *y ){
    return 1;
  }
  else if( *x < *y){
    return -1;
  }
  return 0;
}