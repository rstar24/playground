#include <stdio.h>

int main() {
    int n, i;
    long long int first = 0, second = 1, next;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms: ", n);

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld", next);

        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
