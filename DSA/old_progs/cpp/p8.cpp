#include <iostream>
using namespace std;

class myclass {
  int i;
public:
  myclass(int n);
  ~myclass();
  void set_i(int n){ i = n;}
  int get_i(){ return i;}
};

myclass::myclass(int n) {
  i = n;
  cout << "Constructing " << n << endl;
}

myclass::~myclass() { cout << "Destroying " << i << endl; }

void f(myclass ob);

int main() {
  myclass o(1);
  f(o); // The consturctor is not called in this 
        // because the object is being copied 
        // new object is not being created
        
  cout << "THis is i in main :"<< o.get_i() << endl;

  // The destructor will be called because 
  // object needs to freed from memory 
  return 0;
}

void f(myclass ob){
  ob.set_i(2);
  std::cout << "THis is local i "<< ob.get_i() << std::endl;

}
