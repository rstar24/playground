#include <stdio.h>
#include <stdlib.h>

extern int x;
void f(){
    ++x;
    printf(" x = %d\n",x);
}

int x = 10;

void g(){
    ++x;
    printf("x = %d\n",x);
}

int main(){
    f();
    g();   
    return 0;
}