#include <stdio.h>
#include <stdlib.h>
// To play tic tac toe

int main(int argc, char *argv[]) {

  do {
    int a;
    scanf("%d", &a);
    if (a == 0) {
      printf("This is First");
    } else if (a == 1) {
      printf("This is Second");
    } else {
      printf("IT goes on forver");
    }
  } while (1);
  printf("This is Another Change  \n");
  return EXIT_SUCCESS;
}
