#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   printf("Enter the character\n");
   char a;
   scanf("%c",&a);
   printf("ASCII value of %c is %d\n",a,a);
   return EXIT_SUCCESS;
}