#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

    if (result == num) {
        return 1; // Armstrong number
    } else {
        return 0; // Not an Armstrong number
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
