#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    priority_queue<int,vector<int>,greater<int>> pq;

    int a[] = {1,3,4,5,6,7,2,743};

    for (auto x : a){
        pq.push(x);
    }
    int sz = 7;
    while (sz--){
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0 ;
}