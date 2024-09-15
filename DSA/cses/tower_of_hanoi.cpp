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

    ofstream f1;
    f1.open("output.txt",'w');

    if (!f1){
        cerr << "Error opening the file\n" ;
        return 1;
    }

    


    // cout<< TOH(n,a,b,aux)<< endl;

    for (auto x : moves){
        fwrite(f1, x.first,' ', x.second ,'\n');
    }
    
    fclose(f1);

    return 0 ;
}
