#include <bits/stdc++.h>
using namespace std;

// A utility funciton for 
// returning maximum out of two variables
int max(int a ,int b ) { return (a>b) ? a: b; }

// Return the maximum value that 
// can be put in a knap sack of capacity w
int knapSack(int W, int wt[],int val[], int n){
    
    // Base Case
    if(n == 0 || W == 0)
        return 0;
    
    // If weight of the nth item is more
    // than knapsack capacithy w, then
    // this item cannot be included 
    // in the optimal solution
    if (wt[n-1] > W)
        return knapSack(W,wt,val,n-1);
    else
        return max(
            val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),
            knapSack(W,wt,val,n-1)
            );
}

int main(int argc, char *argv[]){
    int profit[] = {199,299,232};
    int weight[] = {10,20,02};

    int W = 20;
    int n = sizeof(profit)/sizeof(profit[0]);

    cout<< knapSack(W,weight,profit,n);


    
    return 0;
}