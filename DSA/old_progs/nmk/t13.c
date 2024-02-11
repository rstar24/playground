#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
   printf("Practise programms for the competitive \n");
   printf("Programming prepratios\n");
   int x ; 
   scanf("%d", &x);
   if (x & 1){
    printf("Not Divisible by 2 \n");
   }
   else{
    printf("Divisible by 2\n");
   }

   return EXIT_SUCCESS;
}