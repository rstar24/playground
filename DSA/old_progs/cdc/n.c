#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   int i = 0 ;
   printf("%d %d %d %d\n", ++i ,i++, ++i , i );
   // Undefined behaviour 
   return EXIT_SUCCESS;
}