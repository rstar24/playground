#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    for ( int k = 1 ;k <= n; k++){

        ll total = (ll)k * k * ( (ll) k * k - 1 ) / 2 ;

        ll attacking = 4 * (k - 1) * (k - 2);

        ll non_attacking = total - attacking;

        cout << non_attacking << "\n";

    }
    
    return 0;
}
