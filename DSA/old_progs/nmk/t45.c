#include <stdio.h>
#include <stdlib.h>
// Producer and consumer 
// Program
int mutex = 1;

int full = 0 ;

int empty = 10, x = 0 ;

void producer(){
    --mutex;
    ++full;
    --empty;
    x++;
    printf("Producer produces %d \n",x);
    ++mutex;
}

void consumer(){
    --mutex;
    --full;
    ++empty;
    printf("Consumer Consumed\n %d",x);
    x--;
    ++mutex;
}

int main(int argc, char *argv[]){
    
    int n, i;
    printf("\n Press 1 for producer \n Press 2 for consumer \n Press 3 for exit");

    // #pragma omp critical
    for ( i = 1; i > 0; i++)
    {
        printf("\nEnter your choice ");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            if((mutex == 1) && (empty != 0)){
                producer();
            } 
            break;
        case 2:
            if((mutex == 1 )&& (full != 0) ){
                consumer();
            }
            else{
                printf("Buffer is empty\n");
            }
            break;
        case 3:
            exit(0);
        default:
            break;
        }
    }
    return EXIT_SUCCESS;
}