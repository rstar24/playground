#include <bits/stdc++.h>
using namespace std;

void result(int x){
    if ( x < 500){
        long double t1 = (long double) pow(2,x);
        long double t2 = (long double)((1e+9) + 7);
        long double r1 = fmod(t1,t2);
        long long int r2 = (long long int) r1;
        cout << r2 << endl;
    }
    else {
        long double t2 = (long double)((1e+9) + 7);
        long double temp = 1;
        for (int i = 0 ; i< x ;i++){
            temp = temp * 2;
            temp = fmod(temp,t2);
        }
        long double r1 = fmod(temp,t2);
        long long int r2 = (long long int) r1;
        cout << r2 << endl;

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long double x;
    cin >> x;

    result(x);

    return 0 ;
}