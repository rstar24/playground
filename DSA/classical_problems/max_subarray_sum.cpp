#include <bits/stdc++.h>
using namespace std;
// Kadane's Algorithm
// To calculate the maximum subarray sum

int main(int argc, char *argv[]){
    // The required array
    int arr[] = {-1,2,4,-3,5,2,-5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Approach 1 with time complexity of O(n^3)
    int best = 0 ;
    for (int i = 0 ; i<n ;i++){
        for (int j = i ; j<n ; j++){
            int sum = 0;
            for (int k = i ; k<= j ; k++){
                sum  += arr[k];
            }
            best = max(best,sum);
        }
    }

    cout << "The maximum subarray sum is using O(n^3) : " << best << endl;

    // Approach 2 with time complexity of O(n^2)
    best = 0 ; 
    for (int i = 0 ; i<n; i++){
        int sum = 0;
        for (int j = i ; j < n ; j++){
            sum += arr[j];
            best = max(best,sum);
        }
    }
    cout << "The maximum subarray sum is using O(n^2) : " << best << endl;

    // Approah 3 with time complexity of O(n)
    // Kadane's Algorithm
    best = 0;
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++){
        sum= max(arr[i],sum+arr[i]);
        best = max(best,sum);
    }

    cout << "The maximum subarray sum is using O(n) : " << best << endl;

    return 0;
}