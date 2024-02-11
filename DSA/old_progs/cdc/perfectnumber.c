#include <stdio.h>
#include <stdlib.h>
// A program for printing the perfect number

void pnum(int x );

int main(int argc, char *argv[]){
    pnum(6);
    pnum(28);
   
   return EXIT_SUCCESS;
}

void pnum(int x){
    int z = 0;
    for(int i = 1; i < x ; i++){
        if( x % i == 0){
            z+= i;
        }
    }    
    if ( x == z ){
        printf("It is a perfect number\n");
    }
}