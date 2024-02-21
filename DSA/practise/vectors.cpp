#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    vector<int> iv; //Empty zero length vec
    vector<char> ch(5); // Length 5 vector of characters
    vector<char> cv(5,'x'); // Length 5 vector with all elements as x
    vector<int> iv2(iv); // creating a vector of vecotrs

    // The following comparison operators
    // are defined for vectors
    // == , < , <=, != , > , >=
    
    vector<int> v1 = {1,2,3,4,5};
    int x = v1.back();
    int y = v1.front();
    // int y = v1.begin();
    cout<< x<<endl;
    // v1.erase(v1.back());
    // for(auto i : v1){
    //     cout<< i<< " ";
    // }

    for(int i = 0;i < v1.size();i++){
        cout<<v1[i]<<endl;
    }

    cout<<endl;
    cout<< y<<endl;

    v1.erase(v1.begin(),v1.end());

    v1[0] = 10;
    cout<< v1[0]<<endl;

    v1.insert(v1.begin(),5,1);
    for(auto x : v1){
        cout<< x <<" ";
    }

    cout<<endl;
    vector<int>::iterator p = v1.begin();
    p +=3;

    v1.insert(p,3,3);
    for(auto x : v1){
        cout<< x <<" ";
    }
    cout<<endl;


    return 0;
}