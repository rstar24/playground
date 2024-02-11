#include <bits/stdc++.h>
using namespace std;

class X {
    //static variable in the class means that only one copy of that 
    //variable exists and all the objects will share or modify it 
    public:
    static int a;
    void change() { 
        cout << "Form X Increment a " <<endl;
        a++;
    }
    void show(){
        cout << "From X Showing the a " <<endl;
        cout << a <<endl;
    }
}; 
//This is need for the code work
//won't work if not declared

int X::a;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // a other type of the object intialization decaration using the 
    // constructor
    // I can even initialize the static variable without 
    // initializing any object 

    X::a = 100;
    cout << "a before the initializaiton of objects" <<endl;
    cout << X::a <<endl;


    X b,c ;
    b.a = 10;
    b.show();
    b.change();
    b.show();

    c.show();
    c.change();
    c.show();

   

    return 0;
}