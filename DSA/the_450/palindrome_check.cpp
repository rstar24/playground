#include <bits/stdc++.h>
using namespace std;

bool check(string &s);

int main(int argc, char *argv[]){
    string s1;
    cout<< "Enter a string "<<endl;
    cin>> s1;
    bool x = check(s1);
    if(x){
        cout<< "Yes it is a palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }
    return 0;
}

bool check(string &s){
    int size = s.length();
    bool result=0;
    int j = size -1;
    for(int i = 0 ; i < size/2 ;i++){
        if(s[i] == s[j]){
            result = true;
        }
        else{
            result = false;
        }
        j--;
    }
    return result;
}