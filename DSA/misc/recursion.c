#include <stdio.h>
#include <stdlib.h>

int pt(int n){
    if(n == 1){
        printf("Rock");
        return 0;
    }else{
        printf("Rock");
        pt(n-1);
    }
}

int main(){
    pt(5);
    return 0;
}