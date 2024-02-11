#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// advent of code puzzle 1 of 2015
// tried on 2023-06-29
//

int main() {
  FILE *fptr;

  fptr = fopen("/home/rishabh/newfolder/Clang/input.txt", "r");
  char a[7005];
  fgets(a, 7001, fptr);
  int s = sizeof(a) / sizeof(a[0]);

  int k = 0;

  for (int i = 0; i < (s - 1); ++i) {

    if (k == -1) {
      printf("%d\n", i);
    }
    switch (a[i]) {
    case '(':
      k++;
      break;
    case ')':
      k--;
      break;
    default:
      break;
    }
  }
  printf("%d\n", k);
  return 0;
}
