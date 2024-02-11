#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a = -1;
    a = (14<25) || a++;
    printf("%d\n",a);
    return EXIT_SUCCESS;
}