#include <bits/stdc++.h>
using namespace std;
#define REP(i,b) for(int i= 0 ; i < b ;i++)
#define REPE(i,a,b) for(int i = a; i <= b ;i++)

int main(int argc, char *argv[]){

    long a; 
    cin>> a;
    if(a>1 && a<4 ){
        cout<<"NO SOLUTION"<<endl;
        exit(EXIT_SUCCESS);
    }

    // vector<int> v1;
    // REPE(i,1,a){
    //     v1.push_back(i);s
    // }

    vector<int> v1;
    vector<int> v2;
    for(int i = 1 ; i <= a; i++){
        if(i % 2 == 0){
            v1.push_back(i);
        }
        else{
            v2.push_back(i);
        }
    }

    // cout << v1.size()<< endl;
    // cout << v2.size() <<endl;

    for(auto x : v1){
        cout<< x << " ";
    }
    for(auto x :v2){
        cout << x << " ";
    }

    // for(int i = 0 ; i < v1.size();i++){

    // }


    return 0;
}