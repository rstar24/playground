#include <stdio.h>
#include <stdlib.h>
// This program will 
// Make error since I am not allowed 
// To take register addresses in c
// Error in both c89 and c99
int main(){
    

    int z =10;
    if (z == 1){
        printf("Yes It works\n");
    }
    else if(z == 10){
        printf("No it won't\n");
    }

    return 0;
}