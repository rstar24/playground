#include <bits/stdc++.h>
using namespace std;


int main(){
    int i = 10 ;
    int j = 24;
    int k = 30;

    int x =1;

    for(;;){
        if (x % i ==  0 ) {
            if (x % j ==  0 ) {
                if (x % k ==  0 ) {
                    break;
                }
            }
        }
        x++;
    }

    cout << x << endl;
    return 0;
}
