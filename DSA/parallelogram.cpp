#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

void parallelogram(int n);

int main(int argc, char *argv[]){
    printf("Simple parallelogram program\n");
    printf("\n");
    parallelogram(10);
    return 0;
}

void parallelogram(int n){
    int x = n;
    for (int i = n; i > 0; i--)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for(int j = 0 ; j < x ; j++){
            printf("*");
        }
        printf("\n");
    }
}