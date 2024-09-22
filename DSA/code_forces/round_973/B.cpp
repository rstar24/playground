#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long x;
    cin >> x ;

    while(x--){
        long long n,t,res;
        cin >> n;
        t = n;
        vector<long long> v1;
        
        while(n--){
            long long t1;
            cin >> t1;
            v1.push_back(t1);
        }

        for (long long i = 1 ; i <= t ;i++){
            // if (v1[i-1] < 0){
            //     v1[i] = (v1[i-1]-v1[i]);
            //     continue;
            // }
            // if(v1[i]< v1[i-1]){
            if(v1[i-1] < 0){
                v1[i] = (v1[i] - v1[i-1]);
            }
            else{
                v1[i] = (v1[i-1] - v1[i]);
            }
            

                // continue;
            // }
            
        }

        cout << v1[t-1] <<endl;
    }

    return 0 ;
}