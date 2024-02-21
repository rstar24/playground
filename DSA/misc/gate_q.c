#include <stdio.h>
#include <stdlib.h>

int g(int p) { printf("%d",p); return p;}
int h(int q) { printf("%d",q); return q;}
int i(int t) { printf("%d",t); return t;}

void f(int x,int y,int z){
    g(x);
    h(y);
    i(z);
}

int main(){
    f(g(10),h(20),i(30));
    return 0;
}