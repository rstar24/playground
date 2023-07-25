#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j=0,s;
    char num[1001] ,d[10]={"0123456789"};
    scanf("%s",num);

    while (j!=10)
    {
        i=0;
        s=0;
        while (num[i]!='\0')
        {
        if(num[i]==d[j])
        s++;
        i++;    
        }
        j++;
        printf("%d",s);
    }
    return 0;
}
