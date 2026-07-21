#include <bits/stdc++.h>
using namespace std;


int main(){
    // TO store a graph 
    
    int n , m ; 
    cin >> n >> m;

    vector<vector<int>> adj;
    vector<vector<int>> adj_list;

    for (int i = 0; i < n; i++) {
      vector<int> temp;
      for (int j = 0; j < m; j++) {
        int k ;
        cin>> k ;
        temp.push_back(k);
      }
      adj.push_back(temp);
    }

    for (auto x : adj){
      for (auto y : x) {
        cout << y ;
      }
      cout << endl;
    }

    for (int i = 0; i < n; i++) {
      vector<int> temp;
      int num;
      while (cin >> num) {
          temp.push_back(num);
          // --- FIX ADDED HERE ---
          // Eat up any trailing spaces or tabs before peeking
          while (cin.peek() == ' ' || cin.peek() == '\t') {
              cin.get(); 
          }
          // ----------------------

          // Peek at the very next character in the buffer
          char next_char = cin.peek(); 

          // If it's a newline, we've reached the end of this row
          if (next_char == '\n' || next_char == EOF) {
              char temp = cin.peek();
              if (temp == '\n'){
                break;
              }
              break; 
          }
      }
      adj_list.push_back(temp);
    }


    for (auto x : adj_list){
      for (auto y : x) {
        cout << y ;
      }
      cout << endl;
    }

    return 0;
}
