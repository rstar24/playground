#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   char *str[100];
   int i ;
   
   for (int i = 0; i < 100; i++)
   {
    if ((str[i] = malloc(128))==NULL){
        printf("Allocation Erroe\n");
        exit(1);
    }
   }

   for (int  i = 0; i < 100; i++)
   {
    free(str[i]);
    printf("Freeing the str %d\n",i);
   }
   
   return EXIT_SUCCESS;
}