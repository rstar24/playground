#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    int a ;
    cin>>a ;
    vector<vector<int>> v1;
    for(int i = 0 ; i < a; i++){
        vector<int> temp;
        for (int j = 0; j < 2; j++)
        {
            int x , y;
            cin>> x >> y;
            temp.push_back(x);
            temp.push_back(y);   
        }
        v1.push_back(temp);
    }

    

    return 0;
}