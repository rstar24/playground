#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char arr[] = "Rishabh Rathore";
    int size = sizeof(arr)/sizeof(arr[0]);
    char *arr2 = (char*) malloc(size*sizeof(char));

    strcpy(arr2,arr);
    printf("%s\n",arr2);
    return 0;
}