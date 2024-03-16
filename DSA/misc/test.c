#include <stdio.h>
#include <stdlib.h>

static  int a = 5;
int main(){
    printf("%d", a--);
    if(a)
    main();
    return 0;
}