#include <iostream>
using namespace std;
// A function
// returning a object
class myclass {
  int i;

public:
  void set_i(int n) { i = n; }
  int get_i() { return i; }
};

myclass f();

int main() {
  myclass o;
  // Here if the destructor of the
  // object is freeing the dynamically allocated
  // memory then it will cause dugs
  // because the destructor will deallocate the memory
  // when it gets destroyed after assingment
  // even thought the object that is at the
  // recieving end will be using the memory
  // this will cause a memory leak
  // i can be wrong too
  // THis problem can be solved with the
  // copy constructor or overloading the
  // assingment operator

  o = f();
  cout << o.get_i() << endl;

  return 0;
}

myclass f() {
  myclass x;
  x.set_i(1574);
  return x;
}
