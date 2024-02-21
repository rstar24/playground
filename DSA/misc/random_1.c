#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;

    // The expressions are evaluated from left to right
    int result = (a += 5, b *= 2, c += a + b);

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("result = %d\n", result);

    return 0;
}
