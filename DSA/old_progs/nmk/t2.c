#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(int argc, char *argv[]){
   printf("Using the c functions \n");
   int* a = (int*) malloc(10 * sizeof(int));
   if(!a){

    printf("Memory Allocation failed\n");
   }
   else{

    printf("Memory allocated successfully\n");
   }
   for (int i = 0; i <10; i++)

   {
    *(a + i) = i;
    int x = (i*i);
    printf("a , (a^2) : %d , %d\n", a[i],x);
   }

   free(a);
   printf("Freed in one go only \n");
//    printf("Size of float : %d\n", sizeof(float));
//    printf("Size of long int : %d\n", sizeof(long int));
//    printf("Size of long long int : %d\n", sizeof(long long int));
//    printf("Size of unsigned int : %d\n", sizeof(unsigned int));
//    printf("Size of signed int : %d\n", sizeof(signed int));
   return EXIT_SUCCESS;   
}
