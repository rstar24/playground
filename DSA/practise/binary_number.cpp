#include <bits/stdc++.h>
using namespace std;

void binary_number(int n,string current = ""){
    if (n == 0 ) {
        cout << current << endl;
        return;
    }
    binary_number(n-1,current + "0"); // append 0
    binary_number(n-1,current + "1"); // append 1
    
}

int main(int argc, char *argv[]){
    int a ;
    cout << "Enter the number of bits : ";
    cin >> a;
    cout << "Possible binary number are :"<<endl;
    binary_number(a);

    
    return 0;
}