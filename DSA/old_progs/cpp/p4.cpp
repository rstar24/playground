#include "bits/stdc++.h"
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

  vector<int> myVector;
  myVector.push_back(1);
  myVector.push_back(2);
  myVector.push_back(3);

  cout << "Elements in the vector : " << endl;
  for (int i = 0; i < myVector.size(); ++i) {

    cout << myVector[i] << " ";
    cout << endl;
  }

  myVector.push_back(5);

  cout << "updated elements in the vector :" << endl;
  for (int num : myVector) {
    cout << num << " ";
  }

  return EXIT_SUCCESS;
}
