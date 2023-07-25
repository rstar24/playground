#include <iostream>
#include "name.h"
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point()
    {
        x = 10;
        y = 29;
    }
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    Point(Point &obj)
    {
        x = obj.x;
        y = obj.y;
    }

public:
    int getX() { return x; }

    int getY() { return y; }
};

int main()
{

    Point p1;
    Point p2(3, 7);
    Point p3 = p2;
    printDetails();

    cout << "Defalut Constructor called" << endl;
    cout << "p1.x = " << p1.getX() << endl;
    cout << "p1.y = " << p1.getY() << endl;
    cout << endl;
    cout << "Parameterized Constructor called" << endl;
    cout << "p2.x = " << p2.getX() << endl;
    cout << "p2.y = " << p2.getY() << endl;
    cout << endl;
    cout << "Copy Constructor called" << endl;
    cout << "p3.x = " << p3.getX() << endl;
    cout << "p3.y = " << p3.getY() << endl;
}
