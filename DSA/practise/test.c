#include <stdio.h>
#include <stdlib.h>
// This program will 
// Make error since I am not allowed 
// To take register addresses in c
// Error in both c89 and c99
int main(){
    
    register int x = 10;
    int *y = &x;

    printf("Address of Register %p",y);

    return 0;
}