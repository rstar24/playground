#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string a,b,c,d;
    ifstream fin("D:/exp.txt");
    fin>>a>>b>>c>>d;

    fin.close();
    cout<<a<<"\t";
    cout<<b<<"\t";
    cout<<c<<"\t";
    cout<<d<<"\t";
    return 0;
}