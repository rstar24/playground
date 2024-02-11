#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    pid_t p = fork();
    if (p<0){
        perror("fork fail");
        exit(1);
    }
    printf("Hello world, process_is(pid) = %d \n",getpid());
   return EXIT_SUCCESS;
}