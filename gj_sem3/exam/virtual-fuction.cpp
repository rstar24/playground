#include <iostream>
using namespace std;

class A{
    public:
    virtual void f()=0;
};

class B:public A{
    public:
    int x=10;
    int y=20;
    virtual void f(){
        cout<<"I not Pure anymore"<<endl;
    };
    int add(){
        return  x+y;
    };
};
int main(){
    B b;
    b.add();
    return 0 ;
}