#include <cstdio>
#ifdef ONPC
    #define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
 
typedef long long ll;
typedef long double ld;
 
 

class myclass {
public:
    int  a;
    int b;
    int c;

    myclass(int x,int y ,int z ){
        a = x;
        b = y;
        c = z;
    }

    void printData(){
        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
        
    }
};


class myclass_2
{
public:
    int a, b , c; 
};


int i;

void test(double a ) { printf("I do nothing \n"); }

void test(const double a ) { printf("I do nothing \n"); }

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TET = 1e9;
    printf("Hello world \n");
    
    myclass myobj(1,2,(3+6));

    myobj.printData();

    // Foo f();
    int j ;
    int k ;
    int l ;

    cout << i << " " << j << endl; 
    cout << k << " " << l << endl; 

    #ifdef ONPC
        cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
    #endif
}
