#include <bits/stdc++.h>
using namespace std;

#define N 5

vector<int> adj[N];
bool visited[N];


void dfs(int s);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    adj[1].push_back(2); 
    adj[2].push_back(3); 
    adj[2].push_back(4); 
    adj[4].push_back(1); 

    dfs(adj[1][0]);

    return 0 ;
}

void dfs(int s){
    if (visited[s]) return ;    
    visited[s] = true;

    // process node s 
    for (auto u : adj[s]){
        cout << "U = " << u << endl;
        dfs(u);
    }
}