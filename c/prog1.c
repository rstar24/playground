#include <stdio.h>
#include <stdlib.h>
//this is a program to eliminate
// space from a string

void sp_to_dash(const char *str);

int main(){
  sp_to_dash("This is a program \n");
  sp_to_dash("I have to test this thing out");
  return 0;
} 

void sp_to_dash(const char *str){
  while(*str){
    if (*str==' ')printf("%c",'-');
    else printf("%c",*str);
    str++;
  }
}