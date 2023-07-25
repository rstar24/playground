#include <iostream>
using namespace std;

int main(){

    int w=10;
    int* k;
    k=&w;
    cout<<"value of var w ="<<w<<endl;
    cout<<"value of pointer k ="<<k<<endl; //it stores the address of the w
    //this is accessing the value stored at address that is stored in the 
    //pointer variable
    cout<<"value stored at pointer k "<< *k<<endl;
    //
    cout<<"Address of k"<<&k<<endl;
    //for every run this program is going to produce different 
    //output

    return 0 ;
}