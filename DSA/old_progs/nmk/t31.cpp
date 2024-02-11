#include <bits/stdc++.h>
using namespace std;

class loc{
    int longitude;
    int latitude;
    public:
    loc(){} // for the temp
    loc(int i ,int j){
        longitude = i;
        latitude = j;
    }
    void show(){
        cout << longitude <<" "<< latitude <<endl;
    }
    friend loc operator+(loc op, int x);
    friend loc operator+(int x , loc op);

};

loc operator+(loc op,int x){
    loc temp;
    temp.longitude = op.longitude + x;
    temp.latitude = op.latitude + x;
    return temp;
}

loc operator+(int x, loc op){
    loc temp;
    temp.longitude = x + op.longitude;
    temp.latitude = x + op.latitude;
    return temp;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // operator overloading
    // by the friend fucntion 
    // containing built in types 

    loc ob1(10,20) , ob2(20,10) ;
    loc ob3 = ob1 + 10;
    ob3.show();
    ob3 = ob3 +10;
    ob3.show();



    return 0;
}

