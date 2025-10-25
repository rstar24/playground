#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n , x;
    cin>> n >> x ;
    vector<int> weights;
    
    for(int i = 0 ; i < n ;i++){
        int a;
        cin >> a;
        weights.push_back(a);
    }

    sort(weights.begin(),weights.end());

    int i = 0 ;
    int j = n - 1;
    int res = 0;

    while( i <= j){

        if ( weights[i] + weights[j] <= x ){
            i++;
        }
        j--;
        res++;
    }

    cout << res <<endl;

    return 0 ;
}