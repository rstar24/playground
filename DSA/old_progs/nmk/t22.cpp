#include <bits/stdc++.h>
using namespace std;

class tempclass{
    public:
    int a;
    int b;
    //If a function is declared in the class then the function is
    //inherently inline function
    //their will be no function call code will expand to the function
    //defination rather function being called on the stack
    void init(int x, int y) {a = x;  b = y; }
};


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    tempclass xx ;
    
    xx.init(15,20);
    cout << "a = "<< xx.a <<endl;
    cout << "b = "<< xx.b <<endl;

    return 0;
}