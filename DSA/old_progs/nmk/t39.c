#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    for (int i = 77; i < 90; i=i+3)
    {
        printf("%c\n",i+32);
    }
    
    return EXIT_SUCCESS;
}