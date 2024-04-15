#include <iostream>
#include <vector>

using namespace std;

// Function to print all subarrays of an array
void printSubarrays(const vector<int>& arr) {
    int n = arr.size();
    
    // Generate all subarrays
    for (int start = 0; start < n; ++start) {
        for (int end = start; end < n; ++end) {
            // Print current subarray
            cout << "[ ";
            for (int i = start; i <= end; ++i) {
                cout << arr[i] << " ";
            }
            cout << "]" << endl;
        }
    }
}

int main() {
    // Example usage
    vector<int> arr = {1, 2, 3};
    cout << "All subarrays of {1, 2, 3}:" << endl;
    printSubarrays(arr);
    return 0;
}