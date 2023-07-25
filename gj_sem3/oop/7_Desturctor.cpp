#include <iostream>
#include "name.h"
using namespace std;

class Point
{
public:
    int x;
    int y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    ~Point()
    {
        cout << "Point Destructor is called" << endl;
    }
};

int main()
{
    Point p(12, 10);
    printDetails();
    cout << "p.x = " << p.x << endl;
    cout << "p.y = " << p.y << endl;
    return 0;
}
