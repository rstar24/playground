#include <stdio.h>
#include <stdlib.h>
// This program will 
// Make error since I am not allowed 
// To take register addresses in c
// Error in both c89 and c99
int main(){
    
    int a[1] ={10}; 
    int b;
    scanf("%d",&b);
    printf("%d",a[b]);

    return 0;
}