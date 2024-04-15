#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    stringstream ss("123,456,789");
    char ch;
    int a,b,c;
    ss>>a;
    cout<< "Position of ss "<<ss.tellg()<< endl;
    ss>>ch;
    cout<< "Position of ss "<<ss.tellg()<< endl;
    cout<< "a = "<<a <<endl;
    // cout<< "b = "<<b <<endl;
    // cout<< "c = "<<c <<endl;
    return 0;
}