#include <bits/stdc++.h>
#include <cstdlib>
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

    // void *operator new(size_t size);
    // void operator delete(void *p);
};

void *operator new(size_t size){
    cout << "I am the global new" <<endl;
    void *p;
    p = malloc(size);
    if(!p){
        bad_alloc ba;
        throw ba;
    }    
    return p;
}

void operator delete(void *p){
    free(p);
    cout << "I am the global delete" <<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // GLobal overloaded new and delete
    int *a;
    a = new int[10];
    for(int i = 0 ; i < 10 ; i++){
        a[i] = i;
    }
    for(int i = 0 ; i < 10 ; i++){
        cout << a[i] <<endl;
    }

    double *fp;
    fp = new double[10];
    double x = 0;
    for(int i = 0 ; i < 10 ; i++){
        x *= x ;
        fp[i] = x;
        x++;
    }
    cout << "The double array" <<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << fp[i] <<endl;
    }
    

    printf("%p\n",a);
    printf("%p\n",a[1]);
    printf("%p\n",a[9]);
    delete(fp);
    delete(a);
    //This proves myself the 
    // that the global delete and new works
    

    return 0;
}