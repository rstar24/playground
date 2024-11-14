#include <bits/stdc++.h>
using namespace std;

// I just have to make a 
// simple transition function table and 
// to find initial and final transitions 
// to check if they have an edge between them such 
// that input is 1 making it a non overlapping sequence detector 
// if not than overlapping sequence detector

// transition table
vector<pair<pair<char,char>,pair<int,int>>> table;

int main(){
    char x,y;
    int aa,bb;

    do {
        cin >> x >> y >> aa >> bb;
        table.push_back(make_pair(make_pair(x,y),make_pair(aa,bb)));
    }while( !cin.eof() );

    

    
    
    return 0;
}