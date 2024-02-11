#include <iostream>
using namespace std;
// A example for constructor and destructor
// of a class

class myclass {
public:
  int who;
  myclass(int id);
  ~myclass();
} glob_ob1(1), glob_ob(2);

myclass::myclass(int id) {
  cout << "initializing " << id << endl;
  who = id;
}

myclass::~myclass() { cout << "destructing " << who << endl; }

int main() {
  myclass local_obj1(3);
  cout << "this will not be the first line displayed" << endl;
  myclass local_obj2(4);

  return 0;
}
