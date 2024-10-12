#include <bits/stdc++.h>
using namespace std;

#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
 
typedef long long ll;
typedef long double ld;

vector<pair<int,int>> pairUp(vector<int> &v){
    set<pair<int,int>> pairs;
    vector<pair<int,int>> ans;
    int sz = sz(v);
    for (int i = 0 ; i < sz;i++){
        for (int j = i+1 ; j < sz;j++){
            pairs.insert(make_pair(v[i],v[j]));
        }
    }

    for (auto x :pairs){
        ans.push_back(x);
    }


    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v1({1,2,3,4,5,6,7,8,9,10});
    for (auto x: v1){
        cout << x << " ";
    }
    cout << endl;

    vector<pair<int,int>> res  = pairUp(v1);

    for (auto x : res){
        cout << "("<<x.first << "," << x.second<< ")"<<endl;
    }

    cout << "No of pair are"<< endl;
    cout << res.size() << endl;

    return 0 ;
}