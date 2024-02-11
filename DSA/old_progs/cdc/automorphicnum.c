#include <stdio.h>
#include <stdlib.h>

void automorphicnum(int x){
    int y = x*x;

    while (x > 0)
    {
        if( x % 10 != y % 10){
            printf("Not automorphic\n");
        }
        x /=10;
        y /=10;
    }
    
    printf("Yes automorphic\n");

    
}

int main(int argc, char *argv[]){
    automorphicnum(25);
    automorphicnum(76);

   return EXIT_SUCCESS;
}