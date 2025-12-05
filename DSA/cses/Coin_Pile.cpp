#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n ; 
    cin >> n ;


    pair<int,int> dp[n];
    for (int i = 0 ; i < n ; i++){
        cin >> dp[i].first >> dp[i].second ;
    }

    for (auto x : dp ){
        int a = x.first ;
        int b = x.second ;

        if ( (a/2) > b || (b/2) > a ){
            cout << "NO" << endl ;
            continue;
        }

       while ( a != -1 && b != -1 ){
            if (a == 0 && b == 0 ){
                cout << "YES" << endl ;
                break;
            }
            if (a == 2 && b == 1 ){
                cout << "YES" << endl ;
                break;

            }
            if (a == 2 && b == 2 ){
                cout << "NO" << endl ;
                break;
            }

            if (a == 1 && b == 2 ){
                cout << "YES" << endl ;
                break;
            }

            if (a == 1 && b == 1 ){
                cout << "NO" << endl ;
                break;
            }
            if ( a >= b ){
                --a;
                --a;
                --b;
            }
            else if (b >= a) {
                --b;
                --b;
                --a;
            }
        }    
    }

    return 0;
}
