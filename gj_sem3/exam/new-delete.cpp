#include <bits/stdc++.h>
using namespace std;
int main(){
    int *ptr;
    ptr =new int ;
    cout<<"Enter a new integer"<<endl;
    cin>>*ptr;
    *ptr=*ptr+5;
    cout<<"Incremetned value is "<<endl;
    cout<<*ptr<<endl;
    delete ptr;
    cout<<"After deleting it"<<endl;
    cout<<*ptr<<endl;
    //it takes any garbage value
    return 0 ;
}