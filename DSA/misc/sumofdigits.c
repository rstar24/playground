#include <stdio.h>
#include <stdlib.h>

int sumofdigits(int n){
    // the base case of 
    // recursion
    if(n > 0 && n<= 9){
        return n;
    }
    else{
        return n%10 + sumofdigits(n/10);
    }
}

int main(){
    printf("%d",sumofdigits(125));
    
    return 0;
}