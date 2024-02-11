#include <stdio.h>

// Recursive function to find the sum of natural numbers
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;  // Base case: when n becomes 0
    } else {
        return n + sumOfNaturalNumbers(n - 1);  // Recursive case
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumOfNaturalNumbers(num);
        printf("The sum of natural numbers from 1 to %d is: %d\n", num, sum);
    }

    return 0;
}
