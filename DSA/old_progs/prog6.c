#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Pointers*/

int search(char *p[], char *name);

char *names[]= {
  "Herb",
  "Rex",
  "Dennis",
  "John",
  NULL
};

int main(void)
{
  if (search(names, "Dennis") != -1) 
  printf("Dennis is in list \n");
  if (search(names, "Bill") ==-1)
    printf("Bill not found\n");
  return EXIT_SUCCESS;
}

int search(char *p[], char *name){
  register int t;
  for (t=0;p[t];++t) 
    if (!strcmp(p[t],name)) return t; 
      return -1;
}

