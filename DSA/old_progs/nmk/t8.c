#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int z = ((number_of_students%2 == 0) ? (number_of_students/2) :  ((number_of_students/2) + 1)); 
  if( gender == 'b'){
    int x = 0 ;
    for ( int i = 0 ; i< z; i++){
        if(number_of_students == i){
            break;
        }
        x += marks[i*2];
    }
    return x;
  }
  else if ( gender = 'g'){
    int  y=0 ; 
    int flag= 0 ;
    for( int i = 0 ; i < z ; i++){
            y += marks[(2*i)+1];
        }
    return y;
    }   
}


int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
    printf("\n");
    return 0;
}