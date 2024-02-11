#include <iostream>
using namespace std;

class loc {
    int longitude;
    int latitude;
    public:
    loc(){}//for generating the temp obj
    loc(int i, int j){
        longitude = i;
        latitude = j;
    }
    void show(){
        cout << longitude <<" "<< latitude <<endl;
    }
    loc operator+(loc ob2);
    loc operator-(loc ob2);
    loc operator*(loc ob2);
    loc operator++();
    loc operator--();
    loc operator%(loc ob2);
    loc operator/(loc ob2);
    loc operator=(loc ob2);
    loc operator++(int x);

};

loc loc::operator=(loc ob2){
    longitude = ob2.longitude;
    latitude = ob2.latitude;
    return *this;
}

loc loc::operator+(loc ob2){

    loc temp;
    temp.longitude = longitude + ob2.longitude;
    temp.latitude = latitude + ob2.latitude;
    return temp;
}

loc loc::operator-(loc ob2){
    loc temp;
    temp.longitude = longitude - ob2.longitude;
    temp.latitude = latitude - ob2.latitude;
    return temp;
}

loc loc::operator*(loc ob2){
    loc temp;
    temp.longitude = longitude * ob2.latitude;
    temp.latitude = latitude * ob2.latitude;
    return temp;
}

loc loc::operator%(loc ob2){
    loc temp;
    temp.longitude = longitude % ob2.latitude;
    temp.latitude = latitude % ob2.latitude;
    return temp;
}

loc loc::operator++(){
    longitude++;
    latitude++;
    return *this;
}

loc loc::operator++(int x){
    longitude++;
    latitude++;
    cout << "THis is a postfix operator" <<endl;
    return *this;
}

loc loc::operator--(){
    longitude--;
    latitude--;
    return *this;
}

loc loc::operator/(loc ob2){
    loc temp;
    temp.longitude = longitude / ob2.longitude;
    temp.latitude = latitude / ob2.latitude;
    return temp;
}

int main(){
    // Operator overloading on
    // the simple class objects
    cout << "operator overloading" <<endl;
    loc ob1(50,100);
    loc ob2(10,20);

    loc ob3 = ob1 + ob2;
    ob3.show();
    ++ob3;
    ob3.show();    
    --ob3;
    ob3.show();
    loc ob4 = ob1 - ob2 ;
    ob4.show();
    cout << "Multiplication" <<endl;
    ob4 = ob1 * ob2;
    ob4.show();
    cout << "Modulus" <<endl;
    ob4 = ob1 % ob2;
    ob4.show();
    cout << "division" <<endl;
    ob4 = ob1 / ob2 ;
    ob4.show();

    ob4 = ob1 = ob2;
    ob4.show();
    ob1.show();
    ob4++;
    ob4.show();


    return 0;
}