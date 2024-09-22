#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >>t ;

    while(t--){
        int n;
        cin >> n;

        string vowels = "aeiou";
        string result = "";

        for (int i = 0 ; i < n ; i++){
            result += vowels[i%5];
        }

        cout << result << endl;
        
    }

    return 0 ;
}