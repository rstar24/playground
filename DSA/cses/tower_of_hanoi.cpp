#include <bits/stdc++.h>
using namespace std;
 
 
void TOH(int n , int a, int aux,int b){
    if (n == 1){
        cout << a << " " << b << endl;
        return ;
    }
    TOH(n-1, a, b, aux);
    cout << a << " " << b << endl;
    TOH(n-1, aux, a, b);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin>> n ;
    int a = 1;
    int b = 2;
    int aux = 3;    
    cout << pow(2,n) - 1 << endl;
    TOH(n,a,b,aux);

    return 0 ;
}