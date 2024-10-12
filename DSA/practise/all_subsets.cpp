#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[] = {1,2,3,4,5};

    for (int i = 0 ; i < 5; i++){
        for (int j = 0 ; j < i ; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }

    return 0 ;
}