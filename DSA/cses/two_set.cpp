#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Function to generate all combinations of size r from n elements
void generateCombinations(ll n, ll r,vector<vector<ll>> &combi ) {
    // Vector to store the current combination
    std::vector<ll> combination(r);
    
    // Initialize the first combination
    for (int i = 0; i < r; ++i) {
        combination[i] = i + 1;
    }
    // combi.push_back(combination);
    
    // Loop to generate combinations
    while (true) {

        // Print the current combination
        // for (int i = 0; i < r; ++i) {
        //     std::cout << combination[i] << " ";
        // }
        // std::cout << std::endl;
        combi.push_back(combination);
        
        // Find the rightmost element that can be incremented
        int i;
        for (i = r - 1; i >= 0; --i) {
            if (combination[i] != i + n - r + 1) {
                break;
            }
        }
        
        // If no such element is found, we are done
        if (i < 0) {
            break;
        }
        
        // Increment this element and adjust subsequent elements
        ++combination[i];
        for (int j = i + 1; j < r; ++j) {
            combination[j] = combination[j - 1] + 1;
        }
    }
}


void result(ll x){
    // check if sum is divisible by 2 or not 
    ll sum = (x*(x+1))/2 ;

    if (sum % 2 == 0){
        cout << "YES" << endl;
        ll t1 = (x/2) ;
        vector<vector<ll>> combi;
        generateCombinations(x,t1,combi);
        int k ;
        for(int i = 0 ; i < combi.size();i++){
            int temp = accumulate(combi[i].begin(),combi[i].end(),0);
            if (temp == (sum/2)){
                k = i;
            }
        }
        vector<ll> s1;
        vector<ll> s2;

        for (const auto x: combi[k]){
            s1.push_back(x);
        }

        unordered_set<int> temporary_set(s1.begin(),s1.end());

        for(int i = 1 ; i<=x;i++){
            if (temporary_set.find(i) == temporary_set.end()){
                s2.push_back(i);
            }
        }

        cout<< s1.size() << endl;
        for (auto &x: s1){
            cout << x << " ";
        }
        cout << endl;
        cout << s2.size() << endl;
        for (auto &x : s2){
            cout << x <<  " ";
        }
        // cout << " THe end" << endl;
    }
    else {
        cout << "NO" << endl;
    }


}



int main(){
    ll a;

    cin >>a ;
    result(a);

    return 0 ;
}
