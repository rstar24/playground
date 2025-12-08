#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1;
    cin>> s1;


    multiset<int> mset ;

    for(auto x:s1){
      mset.insert(x);
    }

    set<int> uch(mset.begin(),mset.end());

    // for(auto it: uch){
    //   cout<< (char) it << " " <<mset.count(it) << endl;
    // }
    
    // check if palindrome reorder possible
    map<char,int> oddchar;

    for (auto x: uch){
      if ( mset.count(x) % 2 != 0){
        oddchar[ (char) x ] = mset.count(x) ;
      }
    }

    // for (auto x : oddchar){
    //   cout << x.first << " " << x.second <<endl;
    // }

    if(oddchar.size() > 1 ){
      cout << "NO SOLUTION" <<endl;
    }
    else{
      // cout << "Palindrome Reorder Possible" <<endl;
      
      string left ;
      auto it = oddchar.begin();
      char odch = it->first;
      int odchfreq = it->second;

      // build the left side of the palindrom
      for(auto x: uch){
        if ( (odch != (char) x) ) {
          left += string( (mset.count(x)/2) , (char) x);
        }
      }

      string right = left;
      reverse(right.begin(),right.end());

      left += string(odchfreq, odch);


      // cout << "left : " << left << endl;
      // cout << "right : " << right << endl;

      cout << left + right << endl;


    }

    return 0 ;
}

