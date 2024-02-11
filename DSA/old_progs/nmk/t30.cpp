#include <bits/stdc++.h>
using namespace std;

class array1{
    int *p;
    int size;
    public:
    array1(int sz){
        p = new(nothrow) int[sz];
        size = sz;
    }
    // THe desturctor
    ~array1(){ delete [] p; }
    
    array1(const array1 &a);
    
    void put(int i, int j){
            p[i] = j;
    }
    
    int get(int i){
        return p[i];
    }
};

array1::array1(const array1 &a){
    p = new(nothrow) int[a.size];
    cout << "copy constructor working" <<endl;
    for(int i = 0 ; i < a.size ;i++) p[i] = a.p[i];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // For the copy constructor
    array1 num(10);
    for(int i = 0 ; i < 10 ; i++) num.put(i,i);
    // for(int i = 9 ; i>=0 ; i--) num.get(i);
    // cout << "" <<endl;
    for (int  i = 0; i < 10; i++)
    {
        cout << num.get(i) <<endl;
    }
    
    // create another array1 initialize with num
    array1 x(num); // should invoke the copy constructor
    for (int  i = 0; i < 10; i++)
    {
        cout << x.get(i) <<endl;
    }
    cout << "" <<endl;
    return 0;
}