#include <bits/stdc++.h>
#include <strstream>
using namespace std;

int main(int argc, char *argv[]){
    register int x = 10;
    int *y = &x;
    cout<< "Address of a register "<< y<<endl;

    char *p = "this is a test \1\2\3\4\5\6\7 A A";
    istrstream ins(p);
    char ch;
    // read and display the binary info
    while (!ins.eof()){
        ins.get(ch);
        cout<< (int) ch<<' ';
    }

    return 0;
}