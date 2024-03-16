#include <stdio.h>
#include <stdlib.h>
void fun(int n){
    if(n <= 0){
        return ;
    }
    else{
        fun(n-1);
        printf("%d",n);
    }
}
int main(){
    fun(4);   
    return 0;
}