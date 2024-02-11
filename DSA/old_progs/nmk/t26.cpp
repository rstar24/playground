#include <bits/stdc++.h>
using namespace std;
// a local class inside a function
// it will be usefull to know 
// and may be a good thing to 



void f(int x){
    class exp1{
        //the local class can not use the 
        //local variables of the function
        //but it can use the staic data member of the function
        // or the variable that are global or extern
        //all the member function should 
        // be defined in the class

        public:
        // no static variable can 
        // be defined in the 
        // local class
        int a;
        void init(int a ){ this->a = a;};
        void show(){ cout << "From local class a = " << a <<endl;}
        ~exp1(){
            cout << "I am the destructor" <<endl;
        };
    }ob1;

    // exp1::~exp1(){
    //     cout << "I am the destructor" <<endl;
    // }

    ob1.init(x);
    ob1.show();
    cout << "I am from the function " <<endl; 
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    f(100);    
    return 0;
}