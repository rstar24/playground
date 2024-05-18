#include <bits/stdc++.h>
using namespace std;

// I am comment
int main(int argc, char *argv[]){
    int n;
    vector<int> v1;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        int x ;
        cin>>x ;
        v1.push_back(x);
    }
    int size = v1.size();
   
    for(auto x : v1){
        cout<< -1*x<<endl; 
    }

    return 0;
}