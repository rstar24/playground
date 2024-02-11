#include <stdio.h>
#include <string.h>

// Function to replace all occurrences of a substring with another string
void replaceSubstring(char *str, const char *substr, const char *replacement) {
    char result[1000]; // Adjust the size as needed
    int i, count = 0;
    int substrLen = strlen(substr);
    int replacementLen = strlen(replacement);

    // Search for all occurrences of the substring in the input string
    for (i = 0; str[i] != '\0';) {
        if (strstr(&str[i], substr) == &str[i]) {
            strcpy(&result[count], replacement);
            count += replacementLen;
            i += substrLen;
        } else {
            result[count] = str[i];
            count++;
            i++;
        }
    }
    result[count] = '\0';

    // Copy the result back to the input string
    strcpy(str, result);
}

int main() {
    char inputString[1000]; // Adjust the size as needed
    char substring[100];
    char replacement[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Enter the substring to replace: ");
    scanf("%s", substring);

    printf("Enter the replacement string: ");
    scanf("%s", replacement);

    replaceSubstring(inputString, substring, replacement);

    printf("Modified string: %s\n", inputString);

    return 0;
}
