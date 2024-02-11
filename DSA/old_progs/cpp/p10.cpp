#include <bits/stdc++.h>
using namespace std;


int main(){
    //The input string to be matched form

    string mystr = "She sells_sea shells in the sea shore";
    cout << mystr <<endl;
    // a regex object that specifically contains the pattern to
    //find in the given string;

    regex regexp("s[a-z_]+");
    // to contain the pattern that was found in the 
    // matching 
    smatch m;
    regex_search(mystr,m,regexp);
    cout << "String that matches the pattern : " <<endl;
    for(auto x: m)
        cout << x <<" ";
    // let see if their is another way to 
    // get the matched pattern as the
    // std
    for (int i = 0; i < m.size(); i++)
        cout << m[i];
    {
        /* code */
    }
    
    cout << "" <<endl;
    return 0;
}