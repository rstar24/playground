#include <stdio.h>
#include <stdlib.h>

int factorial(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

int main(int argc, char *argv[]){
    printf("The factorial of :\n");
    int x; 
    scanf("%d", &x);
    printf("BY recursion %d! = %d \n", x , factorial(x));
    printf("THe end\n");
   
   return EXIT_SUCCESS;
}