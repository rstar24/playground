#include <stdio.h>
#include <stdlib.h>

// A fibonacci program with recursion
int fibonacci(int x);

int main(int argc, char *argv[]) {
  printf("TO print the finbonacci 's n'th term\n");
  int x;
  scanf("%d", &x);
  int z = fibonacci(x);
  printf("The fibonnaci nth value is : %d\n", z);
  return EXIT_SUCCESS;
}

int fibonacci(int x) {
  if (x <= 1){
    return x;
  }
  else { 
    return (fibonacci(x-1) + fibonacci(x-2));
  }
}