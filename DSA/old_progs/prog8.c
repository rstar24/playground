#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Dynamically allocated arrays

int main(int argc, char *argv[])
{
  char *s;
  register int t;
  s = malloc(80);

  if (!s){
    printf("Memory request failed\n");
    exit(1);

  }

  gets(s);
  for (t = strlen(s)-1; t>0; t--) putchar(s[t]);
  free(s);
  return EXIT_SUCCESS;
}


