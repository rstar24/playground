#include <stdio.h>
#include <stdlib.h>
// Practising the calloc and malloc
// style of dynamic array making 

int main(int argc, char *argv[]){
    int *a;
    a = (int *)malloc(10*sizeof(int));
    printf("The address of a \n");
    printf("%p\n",a);
    printf("the realloc \n");
    a = realloc(a,20*sizeof(int));
    printf("The address of a \n");
    printf("%p\n",a);
    for (int i = 0; i < 10; i++)
    {
        a[i] = i*i;
        printf("%d\n", a[i]);
    }
    printf("\n");
    float *b ;
    b = (float *)calloc(10,sizeof(float));
    for (int i = 1; i <= 10; i++)
    {
        b[i] = 23/i;
        printf("%f\n",b[i]);
    }

    free(b);
    free(a);

    
    
    return EXIT_SUCCESS;
}