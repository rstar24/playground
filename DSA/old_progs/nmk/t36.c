#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   int a = 0;
   printf(" a++ = %d\n",a++);
   printf(" ++a = %d\n",++a);

   int b = 3;
   printf("b-- = %d\n",b--);
   printf("--b = %d\n",--b);

   return EXIT_SUCCESS;
}