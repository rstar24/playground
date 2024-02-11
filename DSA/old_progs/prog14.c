#include <stdio.h>
#include <stdlib.h>
#include </home/rishabh/mycode/Clang/myhead.h>
#include <string.h>

int main(int argc, char *argv[])
{
  printf(myname);
  printf("\n");
  char ch[] = "TEST";
  for (int i = 0; i < strlen(ch); i++) {
    printf("%c\n",*(ch+i));
  }
  printf("%d",__STDC_VERSION__);
  //char *chh = &ch;
  return EXIT_SUCCESS;
}
