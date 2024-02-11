// Find a non repeating element in a array
#include <stdio.h>

// Function to find non-repeating elements in an array
void findNonRepeating(int arr[], int n) {
    int count, isUnique;

    printf("Non-repeating elements in the array: ");
    for (int i = 0; i < n; i++) {
        count = 0;
        isUnique = 1; // Assume the element is unique

        // Count occurrences of arr[i]
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                count++;
                isUnique = 0; // Element is not unique
                break;
            }
        }

        // If count is 0, it's a non-repeating element
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 4, 5, 4, 6, 2, 7, 8, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    findNonRepeating(arr, n);

    return 0;
}
