#include <iostream>
#include "name.h"
using namespace std;

class A
{
private:
    int x = 10;

    friend class B;
};

class B
{
private:
    int y = 20;

public:
    void sum()
    {
        A obj;
        cout << obj.x + y << endl;
    }
};

int main(){
    B b1;
    printDetails();
    b1.sum();

    return 0;
}