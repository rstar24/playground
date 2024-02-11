#include <bits/stdc++.h>
using namespace std;

int steps(int n);

int main(){
    int x ;
    cin >> x;
    int y = steps(x);
    cout << "Result = "<< y <<endl;
    return 0;
}

int steps(int num){
    int n = num;
    int s = 0;
    while(n){
        if( (n % 2) == 0 ){
            n = n / 2;
            s++;
        }
        else if ( (n % 2) == 1){
            n--;
            n = n / 2;
            s++;
        }
    }
    return s;
}