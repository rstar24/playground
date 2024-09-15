#include <bits/stdc++.h>
using namespace std;

vector<pair<int , int>> moves;


int TOH(int n , int a, int aux,int b){
    static int count = 0;
    if (n == 1){
        // cout << a << " " << b << endl;
        moves.push_back({a,b});
        count++;
        return count;
    }
    TOH(n-1, a, b, aux);
    // cout << a << " " << b << endl;
    moves.push_back({a,b});
    count++;
    TOH(n-1, aux, a, b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin>> n ;

    int a = 1;
    int b = 2;
    int aux = 3;    

    ofstream f1("output.txt");

    f1 << TOH(n,a,b,aux) << "\n";
    for (auto x : moves){
        f1 << x.first << " " << x.second << "\n";
    }

    f1.close();

    return 0 ;
}
