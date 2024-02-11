#include <stdio.h>
#include <stdlib.h>


int check(char a){
    char aa[] ={'a','e','i','o','u','A','E','I','O','U','\0'};
    for (int i = 0; i < 10; i++)
    {
        if(aa[i] == a){
            return 1;
        }
    }
    
    return 0;
}

int main(int argc, char *argv[]){
   printf("To check if character is a vowel or consonant\n");
   char x;
   scanf("%c",&x);
   if(check(x)){
    printf("IT is vowel\n");
   }
   else{
    printf("IT is consonant\n");
   }
   printf("THe end\n");
   return EXIT_SUCCESS;
}