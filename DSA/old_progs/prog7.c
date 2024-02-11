#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
// Function Pointers
void check(char *a , char *b, int (*cmp) (const char *, const char *));

int compvalues(const char *a , const char *b);


int main(void) {

  char s1[80], s2[80];
  //int (*p) (const char *, const char *);
  //p = strcmp;

  printf("Enter two Strings or values \n");
  gets(s1);
  gets(s2);

  if (isdigit(*s1)) {
    printf("Testing values for equality\n");
    check(s1, s2, compvalues);
  }
  else {
    printf("Testing string for equality\n");
    check(s1,s2,strcmp);
  }
  return 0 ;
}

void check(char *a , char *b, int (*cmp) (const char * , const char *))
{
  printf("Checking\n");
  if ( !(cmp)(a,b)) printf("Equal\n");
  else printf("Not Equal\n");

}

int compvalues(const char *a, const char *b){
  if (atoi(a)==atoi(b)) return 0;
  else {return 1;}
}



