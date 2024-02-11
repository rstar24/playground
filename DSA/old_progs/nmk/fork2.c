#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    fork();
    fork();
    fork();
    printf("Hello fork\n");

   return EXIT_SUCCESS;
}