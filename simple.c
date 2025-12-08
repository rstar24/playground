#include <stdio.h>
#include <stdlib.h>

int main() {
  /* This is a comment*/
//
  printf("Hello world\n");
  char ch[7] = "Rishab";

  printf("%s\n", &ch);

  printf("%s\n",ch+1);

  for(int i = 0; i < 7 ;i++){
    printf("%s\n",ch+i);
  }

  char *ptr = "testme";

  printf("testme"+1);


  return 0;
}

