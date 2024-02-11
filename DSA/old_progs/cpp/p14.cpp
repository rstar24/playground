#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << "Hello world\nI am working fine" <<endl;
    cout << "Let me test some of the tips in the books" <<endl;
    cout << "Here they are" <<endl;
    
    int i = 0 ;
    // I don't know where to use this thing
    // while(cin >> x[i]){
    //     i++;
    // }
    string s ;
    getline(cin , s);
    // printf("%s\n",s)
    cout << " s : \n"<< s <<endl;
    // Interesting property of the mod operator
    int  z = 10 ;
    int x = 5 ;
    int m = 3;
    int y = ((x % m) * (z % m)) ;
    cout << " Y = "<< y <<endl;
    return 0;
}