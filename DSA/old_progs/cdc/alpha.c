#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Remove the Non alpha character

int main() {
    char inputString[] = "KP1574RT1408"; // Replace with your input string
    char resultString[100]; // Adjust the size as needed
    int j = 0; // Index for the resultString

    for (int i = 0; i < strlen(inputString); i++) {
        char ch = inputString[i];

        // Check if the character is an alphabet (a-z or A-Z)
        if (isalpha(ch)) {
            resultString[j] = ch;
            j++;
        }
    }

    resultString[j] = '\0'; // Null-terminate the result string

    printf("Original String: %s\n", inputString);
    printf("String with Non-Alphabets Removed: %s\n", resultString);

    return 0;
}
