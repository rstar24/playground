//program for inheritance
#include <iostream>
using namespace std;
class t{
    public:
    int a; 
    int b;
    void add(int a,int b){
        cout<< a+b;
    }
    private://this are the inaccessible to even the class object
    int c ;
    int d ;
    void add(int c,int d){
        cout<< c-d;
    }
    protected:
    int e=7;
    int f=8 ;
    void prod(int e,int f){
        cout<< e*f;
    }

};

int main(){
    t x,y,z;
    x.a=1;
    x.b=2;
    x.add(x.a,x.b);

    x.c=4;
    x.d=5;
    x.diff(x.c,x.d);
    x.prod(x.e,x.f);
    return 0;
}