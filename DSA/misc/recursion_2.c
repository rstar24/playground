#include <stdio.h>
#include <stdlib.h>
// I made on my 
int pow(int n,int m){
    if(m == 0){
        return 1;
    }
    return n*pow(n,m-1);
}

int main(){
    printf("3^10 = %d",pow(3,10));
    
    return 0;
}