#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   int a = 2023;
   printf("%d%d%d\n", a!=2024, a=2021, a==2021);
   printf("%d\n",a);
   return EXIT_SUCCESS;
}