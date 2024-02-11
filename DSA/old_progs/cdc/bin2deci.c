#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0;
    int remainder, i = 0;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * pow(2, i);
        binaryNumber /= 10;
        i++;
    }

    return decimalNumber;
}

int main() {
    long long binaryNumber;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    int decimalNumber = binaryToDecimal(binaryNumber);

    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}
