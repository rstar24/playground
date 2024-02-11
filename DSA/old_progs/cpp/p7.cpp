#include <iostream>
using namespace std;
// Cpp support nested classes
// but they are rarely used
// Here is a example

void f();

int main() {
  f();
  return 0;
}

void f() {
  // Nested class can not access the local variables of the fucntion
  // in which it is created
  // But it can access the static local variables of
  // the fucntion
  static int ex1 = 100;
  class myclass {
    int i;

  public:
    void put_i(int n) { i = n; }
    int get_i() { return i; }
    void get_static_int() { std::cout << "Static int " << ex1 << std::endl; }
  } ob;

  ob.put_i(10);
  cout << ob.get_i() << endl;
  ob.get_static_int();
  ob.get_static_int();
  ob.get_static_int();
}
