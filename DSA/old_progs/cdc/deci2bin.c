#include <stdio.h>

void decimalToBinary(int decimalNumber) {
    int binary[32]; // An array to store the binary representation
    int i = 0;

    // Handle the case of a decimal number being 0
    if (decimalNumber == 0) {
        printf("Binary equivalent: 0\n");
        return;
    }

    while (decimalNumber > 0) {
        binary[i] = decimalNumber % 2;
        decimalNumber /= 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0) {
        printf("Please enter a non-negative decimal number.\n");
    } else {
        decimalToBinary(decimalNumber);
    }

    return 0;
}
