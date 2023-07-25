#include <iostream>
using namespace std;
//templates are used take multiple data tyepes as arguments
//in a function
template <typename T>
T mysum(T a, T b){
    return a+b;
}




int main(){
    cout<<mysum<int>(2,4)<<endl;
    cout<<""<<endl;
    cout<<mysum<float>(3.5,3.2)<<endl;
    cout<<mysum<long>(23423,234234)<<endl;
    return 0 ;
}