#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // For making a pyramid in C
  for (int  i = 0; i < 10; i++)
  {
    for (int  j = 10; j > i ; j--)
    {
      printf(" ");
    }
    for(int k = (2*i - 1 ) ; k > 0 ; k--){
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  return EXIT_SUCCESS;
}
