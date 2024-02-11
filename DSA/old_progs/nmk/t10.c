#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b);

void swap(char *a, char *b);

int main(int argc, char *argv[]){
    int a; 
    //scanf("%d\n", &a);
    char **s1;
    char ch1 = 'a';
    char ch2 = 'b';
    printf("Befor Swap ch1 : %c\n",ch1);
    printf("Befor Swap ch2 : %c\n",ch2);
    ch1 ^= ch2;
    ch2 ^= ch1;
    ch1 ^= ch2;
    printf("After Swap ch1 : %c\n",ch1);
    printf("After Swap ch2 : %c\n",ch2);

   return EXIT_SUCCESS;
}

void swap(char *a, char *b){
   // A quick way to swap a and b
    a ^= b;
    b ^= a;
    a ^= b;
}

int lexicographic_sort(const char* a, const char* b) {
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    int p = (n > m) ? m : n;
    int ca=0;
    int cb =0 ;
    for(int i = 0; i < p ; i++){
        (a[i] > b[i]) ? ca++ : cb++ ;
    }
    if (ca > cb){
        return 1;
    }
    else{
        return 0;
    }
}