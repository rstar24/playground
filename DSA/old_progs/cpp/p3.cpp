#include <cstdlib>
#include <iostream>

using namespace std;

// Here the static member function get resource
// is called without any object refference

class cl {

public:
  static int resource;
  static int get_resource();
  void free_resource() { resource = 0; };
};
// This declaration enables the class function defination of
// get_resource to use the resource int commenting it out will
// cause and compilation error
int cl::resource; // define free_resource

int cl::get_resource() {
  if (resource)
    return 0;
  else {
    resource = 1;
    return 1; //  resource allocated to this object
  }
}

int main(int argc, char *argv[]) {
  cl ob1, ob2;

  cout << ob1.resource << endl;

  if (cl::get_resource()) { // Look here c bdarefully
    cout << "ob1 has resource\n";
    cout << ob1.resource << endl;
  }
  if (!cl::get_resource()) { // here again
    cout << "ob2 has denied resource\n";
    cout << ob1.resource << endl;
  }

  ob1.free_resource();
  if (ob2.get_resource()) {
    cout << "ob2 can now use resource\n";
    cout << ob2.resource << endl;
  }

  ob2.free_resource();
  cout << ob2.resource << endl;
  return EXIT_SUCCESS;
}
