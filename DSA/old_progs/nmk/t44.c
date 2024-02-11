#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char *a ;
    a = (char *)calloc(10,sizeof(char));
    for (int i = 0; i < 10; i++)
    {
        printf("%c",a[i]);
        printf("'");
    }
    printf("end\n");
    
    return EXIT_SUCCESS;
}