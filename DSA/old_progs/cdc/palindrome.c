#include <stdio.h>
#include <string.h>
#include <ctype.h>

//TO check if a given string is palindrome or not
int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Ignore non-alphanumeric characters from the left
        while (!isalnum(str[left]) && left < right) {
            left++;
        }

        // Ignore non-alphanumeric characters from the right
        while (!isalnum(str[right]) && left < right) {
            right--;
        }

        // Compare characters (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }

        left++;
        right--;
    }

    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string to check if it's a palindrome: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
