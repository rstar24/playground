#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    string s1,s2;
    cin>>s1 >>s2 ;
    string s3 = s1 + s2 ;
    int x = s1.size() ;
    int y = s2.size() ;
    cout<< x << " "<< y <<endl;
    cout<< s3 <<endl;
    swap(s1[0],s2[0]);
    cout<< s1 <<" "<< s2 <<endl;
    return 0;
}