#include <stdio.h>
#include <string.h>

// Function to check if a substring is a palindrome
int isPalindrome(const char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

// Function to find the longest palindrome in an array
void findLongestPalindrome(const char *str) {
    int maxLength = 0;
    int start = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (isPalindrome(str, i, j) && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    printf("Longest palindrome: ");
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[] = "babadddda";

    printf("Original string: %s\n", str);

    findLongestPalindrome(str);

    return 0;
}
