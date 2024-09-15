#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void result(ll n){
    ll sum = (1ll * n *(1ll * n +1)) / 2 ;

    if (sum % 2 != 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;

        vector<int> set1,set2;
        vector<int> vis(n+1,0);

        ll set1_sum = 0 ;
        ll max_element = n;

        while(set1_sum < sum/2){
            ll remaining_sum = sum / 2 - set1_sum;

            if(remaining_sum > max_element){
                set1.push_back(max_element);
                vis[max_element] = 1;
                set1_sum += max_element;
                max_element--;
            }
            else {
                set1.push_back(remaining_sum);
                vis[remaining_sum] = 1;
                set1_sum = sum/2;
            }
        }

        for (int i = 1 ; i <= n ;i++){
            if (vis[i] == 0){
                set2.push_back(i);
            }
        }

        cout<< set1.size() << endl;
        for (auto x: set1){
            cout << x << " ";
        }
        cout<< endl;

        cout << set2.size() << endl;
        for(auto x: set2){
            cout << x << " ";
        }

    }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x ;
    cin >> x;
    result(x);

    return 0 ;
}