#include <bits/stdc++.h>
using namespace std;

class loc {
    int longitude;
    int latitude;
    public:
    loc(){} // for the temps
    friend loc operator++(loc &op);
    friend loc operator++(loc &op,int x);
    loc(int i ,int j);
    void show(){
        cout << longitude <<" "<<latitude <<endl;
    }
};

loc::loc(int i,int j){
    longitude = i ; 
    latitude = j;
}


//it is a friend function
// reference parameter is 
// used in this method 
loc operator++(loc &op){
    op.longitude++;
    op.latitude++;
    cout << "From the friend function" <<endl;
    cout << "and i am the prefix operator" <<endl;
    return op;
}

loc operator++(loc &op,int x){
    op.latitude++;
    op.longitude++;
    cout << "And i am the postfix operator" <<endl;
    return op;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Using the friend function
    // for the operator overloading
    loc o1 =  loc(10,20);
    ++o1;
    o1.show();
    o1++;
    o1.show();
    return 0;
}