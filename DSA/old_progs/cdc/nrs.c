#include <stdio.h>
#include <string.h>
// Given that I should not provide any space in input 
// the program in going to work good

// Function to find non-repeating characters in a string
void findNonRepeatingCharacters(const char *str) {
    int count[256] = {0};  // Assuming extended ASCII characters

    int len = strlen(str);

    // Count the frequency of each character in the string
    for (int i = 0; i < len; i++) {
        count[(int)str[i]]++;
    }

    printf("Non-Repeating Characters in the String: ");
    for (int i = 0; i < len; i++) {
        if (count[(int)str[i]] == 1) {
            printf("%c ", str[i]);
        }
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    findNonRepeatingCharacters(str);

    return 0;
}
