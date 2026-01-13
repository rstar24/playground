#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    vector<int> vec1;
    for (int i = 0 ; i < 10 ; i++) {
    vec1.push_back(i);
    }

    random_shuffle(vec1.begin(),vec1.end());


    for (auto x : vec1) {
    cout<< x << " ";
    }

    printf("\n");
    

    sort(vec1.rbegin(),vec1.rend());

    for (auto x : vec1) {
    cout<< x << " ";
    }
    return 0 ;
}
