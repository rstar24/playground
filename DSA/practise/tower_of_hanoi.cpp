#include <bits/stdc++.h>
using namespace std;
//For counting the number of 
//moves required to solve the 
//Tower of hanoi problem

int steps=0;

void tower_of_hanoi(int n,char from_rod,char to_rod,char aux_rod){
    static int count = 0;
    if(n==0){
        return;
    }
    
    tower_of_hanoi(n-1,from_rod,aux_rod,to_rod);

    cout<< "Move the disk "<<n << " from rod "<< 
        from_rod << " to rod "<< to_rod <<endl;

    tower_of_hanoi(n-1,aux_rod,to_rod,from_rod);
    
    count++;
    steps = count;
}

int main(int argc, char *argv[]){
    cout<< "Solving the tower of hanoi problem"<<endl;
    tower_of_hanoi(3,'A','B','C');
    printf("Number of Moves = %d\n",steps);

    return 0;
}