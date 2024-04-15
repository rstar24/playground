#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    int n , q;
    cin >> n >> q;
    // cout << "n = "<< n <<endl;
    // cout << "q = "<< q <<endl;
    vector<vector<int>> arr;
    vector<int> qarr1;
    vector<int> qarr2;
    for(int i = 0 ; i < n ;i++){
        int x ;
        cin >> x ;
        vector<int> v1;
        for(int j = 0 ; j < x ;j++){
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }
        arr.push_back(v1);
    }
    for(int i = 0 ; i < q ; i++){
        int x ;
        int y ;
        cin >> x >> y;
        qarr1.push_back(x);
        qarr2.push_back(y);
    }
    for(int i = 0 ; i < q ; i++){
        int z = i;
        cout<< arr[qarr1[i]][qarr2[i]] <<endl;
    }
    return 0;
}