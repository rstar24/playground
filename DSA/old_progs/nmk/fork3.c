#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void forkexample(){
    int x = 1; 
   pid_t p = fork();
   if(p < 0){
    printf("Fork fail\n");
    exit(1);
   }
   else if ( p == 0){
    printf("Child has x = %d \n", ++x);
    printf("x++ = %d\n",++x);
   }
   else{
    printf("Parent has x = %d\n", --x);
   }
}

void test(){
    printf("check me \n");
}

int main(int argc, char *argv[]){
    forkexample();
    test();
    printf("I will be printed two times\n");
   return EXIT_SUCCESS;
}