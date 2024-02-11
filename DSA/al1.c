#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
// Example of a bubble sort program from
// herbert schiltz's book

void bubblesort(int *items, int count);

int main(int argc, char *argv[]) {
  printf("Enter unsorted array :\n ");

  return EXIT_SUCCESS;
}

void bubblesort(int *items, int count) {

  register int a, b;
  register int t;

  for (int a = 1; a < count; ++a) {
    for (int b = count - 1; b >= a; --b) {
      if (items[b - 1] > items[b]) {
        /*Exchange elements */
        t = items[b - 1];
        items[b - 1] = items[b];
        items[b] = t;
      }
    }
  }
  printf("itemsay has been sorted \n");
}
