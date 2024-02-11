#include <bits/stdc++.h>
using namespace std;
// The concept of nested class is rarely used int real
// world but may be usefull to know 

class example {
    public:
    int x ;
    void f1(){
        cout << "Nested class example" <<endl;
        ob1.f1();

    }
    void init(int x ){
        this->x = x ;
        ob1.init(x);
    }
    
    class ex2{
        public:
        int x;
        void f1(){
            cout << "I am from the nested class" <<endl;

        }
        void init(int x){
            this->x = x ;
        }
    }ob1 ;
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    example obj1 ;
    obj1.init(100);
    obj1.f1();
    
    return 0;
}