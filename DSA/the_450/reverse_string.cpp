#include <bits/stdc++.h>
using namespace std;

void reverse(string &str){
    int n = str.length();

    for(int i = 0 ; i < n/2 ;i++){
        swap(str[i],str[n-i-1]);
    }
}

int main(int argc, char *argv[]){
    string s;
    cout<< "Enter a String "<<endl;
    cin>>s;
    reverse(s);
    cout<<s;
    return 0;
}

