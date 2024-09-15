#include <bits/stdc++.h>
using namespace std;

int result(int n){
    int r= 0;
    int temp = n;
    while(temp >= 5){
        r += temp/5;
        temp /= 5 ;
    }

    return r;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x ; 
    cin >> x;
    
    cout << result(x) << endl;

    return 0 ;
}