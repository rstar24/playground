#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   int a = 3 , b = 3 , c = 0, d = 1;
   int m;
   m = a-- ||b++ && c++||d--;
   printf("%d %d %d %d %d ",a,b,c,d,m);

   return EXIT_SUCCESS;
}