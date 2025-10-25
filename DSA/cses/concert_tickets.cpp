#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m ;

    cin >> n >> m ;

    multiset<int> prices;
    
    for(int i = 0 ; i< n; i++){
        int x ;
        cin >> x;
        prices.insert(x);
    }

    for(int i = 0 ; i  < m;i++){
        int x;
        cin >> x;

        auto it = prices.upper_bound(x);
        if (it == prices.begin()){
            cout << -1 << endl; 
        }
        else {
            --it;
            cout << *it << endl;
            prices.erase(it);
        }


    }

    return 0 ;
}