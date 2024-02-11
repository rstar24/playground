#include <stdio.h>

// Function to replace elements with their ranks in the array
void replaceWithRanks(int arr[], int ranks[], int n) {
    for (int i = 0; i < n; i++) {
        ranks[i] = 1; // Initialize rank to 1
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[i]) {
                ranks[i]++;
            }
        }
    }
}

int main() {
    int arr[] = {40, 10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ranks[n];

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    replaceWithRanks(arr, ranks, n);

    printf("Array with ranks: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ranks[i]);
    }
    printf("\n");

    return 0;
}
