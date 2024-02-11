#include <stdio.h>
#include <stdlib.h>
//Gate question

int fn(){
    //static variable only for function 
    //only function can the variable
    static int x = 1;
    x++;
    return x;
}

int main(int argc, char *argv[]){
   printf("See the satic int carefully\n");
   int x ,y ;
   x = fn();
   y = fn()+x;
   printf("The sum of both is : %d\n",(x+y));
   fn();
   //And only function can access it 

   printf("%d\n",x);

   int z = fn();
   printf("here look it : %d\n",z);

   return EXIT_SUCCESS;
}