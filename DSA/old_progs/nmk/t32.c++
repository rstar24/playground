#include <bits/stdc++.h>
using namespace std;

class loc {
    int longitude;
    int latitude;
    public:
    loc() {};
    loc(int lg,int lt){
        longitude = lg;
        latitude = lt;
    }
    void show(){
        cout << longitude <<endl;
        cout << latitude <<endl;
    }

    void *operator new(size_t size);
    void operator delete(void *p);

};

void *loc::operator new(size_t size){
    void *p;
    cout << "In overloaded new" <<endl;
    p = malloc(size);
    if(!p){
        bad_alloc ba;
        throw ba;
    }
    return p;
}

void loc::operator delete(void *p){
    cout << "In overloaded delete" <<endl;
    free(p);    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // overloading the new and delete operators
    loc *p1, *p2;
    
    try{
        p1= new loc(10,20);
    }
    catch (bad_alloc xa){
        cout << "Allocation error for p2" <<endl;
        return 1;
    }

    try{
        p2 = new loc (-10,-20);    
    }
    catch(bad_alloc xa){
        cout << "Allocation erro for p2" <<endl;
        return 1;
    }

    p1->show();
    p2->show();

    delete p1;
    delete p2;

    return 0;
}