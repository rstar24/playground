#include <bits/stdc++.h>
using namespace std;

// there are four nodes in exm
const int n = 4;

// give appropratemaximum to avoid overflow
const int MAX = 1000000;

// dist[i][j] represents shortest distance to
// go from i to j this matrix can be calculaed for
// any given graph using all pair shortest path algorithms

int dist[n+1][n+1] = {
    {0,0,0,0,0},{0,0,10,15,20},
    {0,10,0,25,25},{0,15,25,0,30},
    {0,20,25,30,0},
};

// Memoization for top down recursion
int memo[n+1][1<<(n+1)];

int fun(int i , int mask){
    // base case
    // if only ith bit and 1 st bit is set in our mask
    // it implies we have visited all other nodes already
    if( mask == ((1 << i) | 3))
        return dist[1][i];
    
    if(memo[i][mask] != 0)
        return memo[i][mask];
    
    int res = MAX; // Result of this sub-problem

    // we have to travel all nodes j in maks and end the
    // path at ith node so for every node j in mask
    // recursively calculate cost of travelling all nodes j in mask
    // mask excep ti and then travel back from node j to  
    // node i taking the shortest path take the minimum of
    // all possible j nodes
    
    for (int j = 1; j <= n ; j++)
        if((mask & (1<<j)) && j != i && j != 1 )
            res = std::min(res, fun(j,mask & (~(1<<i)))+ dist[j][i]);
    
    return memo[i][mask] = res;
}


int main(int argc, char *argv[]){

    int ans = MAX;
    for (int i = 1; i <= n; i++){
        //Try to go from node 1 visiting all nodes in 
        // between to i then return from i taking the
        // shortest route to 1
        ans = std::min(ans , fun(i,(1<<(n+1))-1)+ dist[i][1]);
    }

    printf("The cost of most efficient tour = %d",ans);

    return 0;
}