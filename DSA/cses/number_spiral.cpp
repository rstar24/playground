#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void result(ll y, ll x){

    if ( y > x) {
        ll s1 = (y-1)*(y-1);
        ll s2 =0;

        if (y % 2 != 0){
            s2 = x;
        }
        else {
            s2 = 2*y-x ;
        }
        cout << s1 + s2 << endl;
    }
    else {
        ll s1 = (x-1)*(x-1);
        ll s2 = 0;

        if (x % 2 ==0){
            s2 = y;
        }
        else {
            s2 = 2*x-y;
        }
        cout << s1 + s2 << endl;
    }
}

int main(){
    int a ;
    cin >> a;
    vector<pair<int,int>> p1;
    
    for (int i = 0 ; i < a ; i++){
        int temp1 , temp2;
        cin >> temp1 >> temp2;
        p1.emplace_back(temp1,temp2);
    }

    for(const auto&p : p1){
        result(p.first, p.second);
    }

    return 0 ;
}