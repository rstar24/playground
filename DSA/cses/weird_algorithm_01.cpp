#include <iostream>
using namespace std;
// Weird Algorithm
// THis is the first problem from cses
 
void algo(long int *a) {
 
  cout << *a << " ";
 
  while (*a > 1) {
 
    if (*a == 1) {
      cout << *a << "\n";
      return;
    }
 
    else if (*a % 2 == 0) {
      *a = *a / 2;
      cout << *a << " ";
    }
 
    else if (*a % 2 == 1) {
      *a = (*a * 3) + 1;
      cout << *a << " ";
    }
  }
}
 
int main() {
 
  long int i;
  cin >> i;
  algo(&i);
 
  return 0;
}