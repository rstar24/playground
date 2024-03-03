#include <stdio.h>
#include <stdlib.h>
// Example of a switch case
int main(){

    int x = 10;

    switch(printf("1234567890\n") + printf("12345678\n") ){
        case 30:
            printf("Hello world\n");
        case 20:
            printf("I am also being executed \n");
            break;
        case 11:
            printf("I am also being executed\n");
            break;
        default:
            break;
    }

    int i = 4;
    int j = 1;
    //Case labels can not be variables 
    // THey must be constant
    switch(printf("Switch\n")){
        case 7:
            printf("Yes it works\n");
            break;
        // case 7:
        //     printf("Trying to compile for dupllicate cases");
            break;
        default:
            break;
    }

    // This may not work for all the compilers

    i = 5;
    j = 15;

    switch(5){
        case 1 ... 10:
            printf("Yes this will work\n");
            break;
        case 11 ... 20:
            printf("YEah huuu\n");
            break;
        default:
            break;
    }

    switch(i){
        i = i + 10; // THis will be ignored because every thing is supposed to happen between the case label 
        // and the break label
        case 1 ... 10:
            printf("Yes i is still equal 5\n");
            break;
        case 11 ... 20:
            printf("YEah huuu\n");
            break;
        default:
            break;
    }

    
    return 0;
}