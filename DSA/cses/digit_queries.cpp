#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    int count = 0;
    // If the number is 0, return 1 because it has 1 digit
    if (num == 0) return 1;
    
    // Handle negative numbers by making them positive
    if (num < 0) num = -num;
    
    // Count digits by repeatedly dividing the number by 10
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n;

    vector<long long  int> v1;

    // Stored the queries
    for (int i =0; i< n;i++){
        long long int temp;
        cin>> temp;
        v1.push_back(temp);
    }

    // finding out the digit at the 1-indexed Kth position
    for(auto x: v1){
        
        long long int t1 = 1;
        long long int pnum ;
        long long int td= 0;
        while((td < x)){

            // long long int digits = (long long int) log10(t1)+ 1;
            long long int digits = (long long int) countDigits(t1);

            if((td + digits) >= x ){
                string s1 = to_string(t1);
                long long int res = (long long int) (s1[x-td-1] - '0');
                cout << res <<endl;
                break;
            }
            else{
                td += digits;
            }

            pnum = t1;
            t1++;
        }
    }
    return 0 ;
}