#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1;
    multiset<int> mset;
    cin >> s1;

    for (auto x : s1){
        mset.insert(x);
    }

    set<int> m2(mset.begin(),mset.end());


    for (auto it = m2.begin(); it != m2.end();it++){
        cout << (char) *it << " "<<  mset.count((char) *it) << endl;
    }




    
    


    return 0 ;
}