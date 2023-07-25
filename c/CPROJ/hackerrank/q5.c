#include <stdio.h>
#include <stdlib.h>



int main(){

    int num, *arr, i;
    scanf("%d",&num);
    arr = (int*) malloc(num*sizeof(int));

    //take the input
    for (i = 0; i < num; i++)
    {   
        scanf("%d",&arr[i]);
    }
    
    //reversal of the array
    int *temp;
    temp = (int*)malloc(num * sizeof(int));
    for(int i=0 ; i< num; i++){
        temp[i]=arr[num-i-1];
    }
    // for printing the output
    for (int i = 0; i < num; i++)
    {
        printf("%d ", temp[i]);
    }
    
    return 0;
}