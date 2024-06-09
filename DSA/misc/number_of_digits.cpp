#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    int a ;
    cout<< "Enter the number : "<<endl;
    cin >> a;
    cout<< "The number of digits in the number is : ";
    cout << floor(log(a)/log(10)) + 1 <<endl;

    return 0;
}