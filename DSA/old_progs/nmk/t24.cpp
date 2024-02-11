#include <bits/stdc++.h>
using namespace std;

// Using the global and local variable 
// An interesting way see this 

int i ;

void f(){
    int i = 10;
    cout << "THis is the local i = "<< i <<endl;
    ::i =100;
    cout << "THis is the global i = "<< ::i <<endl;
}

class example{
    public:
    static void exp1(){
        cout << "I am a static function" <<endl;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << "For the static member function" <<endl;
    example a;
    a.exp1();
    f();
    
    return 0;
}