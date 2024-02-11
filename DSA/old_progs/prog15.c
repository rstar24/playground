#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int z = 10;
  int *p;
  p = &z;
  int **ptop = &p;
  printf("%d\n", z);
  printf("%d\n", *p);
  printf("%d\n", **ptop);

  p = calloc(5, sizeof(int));
  *(p + 1) = 20;
  printf("%d\n", p[1]);

  return EXIT_SUCCESS;
}
