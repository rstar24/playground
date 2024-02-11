#include <stdio.h>
#include <math.h>
// TO generate armstrong numbers between two limits
// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of nth power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (result == num);
}

int main() {
    int lower, upper;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers in the range %d to %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
