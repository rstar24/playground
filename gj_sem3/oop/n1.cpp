#include <iostream>
using namespace std;


int main(){
    cout<<"This is rishabh"<<endl;
    cout<<"HI"<<endl;
    int a=100   ;
    int b=200;
    int *q=&b;
    int* p=&a;
    cout<<"this is a pointer which contain"<<endl;
    cout<<"the address to variable a "<<endl;
    cout<<p<<endl;
    cout<<"The stored at location"<<endl;
    cout<<"pointed out by p"<<endl;
    cout<<*p<<endl;
    cout<<"This is value stored in q"<<endl;
    cout<<q<<endl;
    cout<<"This is value ponited out"<<endl;
    cout<<"By q"<<endl;
    cout<<*q<<endl;




    return 0 ;
}