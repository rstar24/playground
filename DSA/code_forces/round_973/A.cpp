#include <bits/stdc++.h>
using namespace std;

long long timeInSec(long long n, long long x,long long y){
    long long res;
    // if (n < x ){
    //     return 1;
    // }
    long long xx = min(x,y);

    if (n % xx != 0){
        res = n/xx + 1;
    }
    else {
        res = n/xx;
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long x;
    cin >> x;
    vector<long long> ans;

    while(x--){
        long long n,x,y;
        cin >> n >> x >> y;
        // cout << timeInSec(n,x,y)<< endl;
        ans.push_back(timeInSec(n,x,y));
    }

    for (auto x: ans){
        cout << x << endl;
    }
    return 0 ;
}