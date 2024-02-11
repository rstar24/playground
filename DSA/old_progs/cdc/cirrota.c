//	Write a code to find circular rotation of an array by K positions.
#include <stdio.h>
#include <stdlib.h>

// Function to rotate an array to the right by K positions
void rotateArray(int arr[], int n, int k) {
    int temp;
    for (int i = 0; i < k; i++) {
        temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the number of positions to rotate (K): ");
    scanf("%d", &k);

    // Make sure K is within the array size
    k = k % n;

    rotateArray(arr, n, k);

    printf("Array after rotating by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
