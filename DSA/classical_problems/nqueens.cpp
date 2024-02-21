#include <bits/stdc++.h>
#define N 4
using namespace std;

// A function to print solution
void printSolution(int board[N][N]){
    for (int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++)
            if(board[i][j])
                cout<<"Q ";
            else cout<< ". ";
        printf("\n");
    }
}

// A utility funciton to check if a queen can 
// be placed on the board[row][col]. Note that this
// function is called when "col" queens are
// already placed in columns from 0 to col -1.
// so we need to check only left side for 
// attacking queens
bool isSafe(int board[N][N], int row, int col){
    int i, j;
    
    // Check this row on left side
    for(i = 0 ; i < col ; i++)
        if(board[row][i])
            return false;

    // Check upper diagonal on left side
    for(i = row , j = col; i >= 0 && j >= 0; i--,j--)
        if(board[i][j])
            return false;    

    // Check the lower diagonal on left side
    for(i = row , j = col; j >= 0 && i < N ; i++, j--)
        if(board[i][j])
            return false;
    
    return true;
}

// A recursive utility function to solve N 
// Queen Problem
bool solveNQUtil(int board[N][N], int col){
    // Base case: if all queens are placed
    // then return true
    if(col >= N){
        return true;
    }   

    //Consider if the queen can be placed on 
    // board[i][col]
    for(int i = 0 ; i < N ;i++){
        if (isSafe(board, i, col))
        {
            // Place this queen in board[i][col]
            board[i][col] = 1;

            // Recur to place rest of the queens
            if (solveNQUtil(board,col+1)){
                return true;
            }

            // If placing queen in board[i][col]
            // Doesn't lead to a solution, then
            // remove queen from board[i][col]
            board[i][col] = 0;// Backtrack
        }
    }
    // If the queen can not be placed in any row 
    // in this column col then return false
    return false;
}

// THis function solves the N queen problem using
// backtracking. It mainly uses solveNQUtil() to
// solve th problem. It reuturns false if queens
// cannot be placed, otherwise, return true and prints
// placement of queens in the form of 1's.
// Please note that there may be more than one solutions
// this, function prints one of the feasible solution
bool solveNQ(){
    int board[N][N] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

    if(solveNQUtil(board, 0) == false){
        cout << "Solution does not exist ";
        return false;
    }

    printSolution(board);
    return true;
}

int main(int argc, char *argv[]){
    solveNQ();
    return 0;
}