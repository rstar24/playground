#include <bits/stdc++.h>
using namespace std;

class vector 
{
    public:
        int *arr;
        int size;
        vector(int n){
            size = n;
            arr = new int[size];
        }

        int dotProduct(vector &v){
            int d = 0 ;
            for (int i = 0 ; i <size; i++){
                d += this->arr[i] * v.arr[i];
                
            }
            return d;
        }
};

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    vector v1(3);
    v1.arr[0] = 1 ;
    v1.arr[1] = 12 ;
    v1.arr[2] = 13 ;

    vector v2(3);
    v2.arr[0] = 1 ;
    v2.arr[1] = 2 ;
    v2.arr[2] = 2 ;

    int x = v1.dotProduct(v2);
    cout << x << endl;

    return 0 ;
}