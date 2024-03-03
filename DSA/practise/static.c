#include <stdio.h>
#include <stdlib.h>
// They can only be initialized using literal only

int main(){
    
    // will give error 
    int i =10;
    static j = i;
    // Static variable have internal linkage because they can only be 
    // acessed in the file 
    
    
    return 0;
}