#include <stdio.h>
#include <string.h>
#include <ctype.h>

void calculateCharacterFrequency(const char *str) {
    int count[128] = {0};  // Assuming ASCII characters

    for (int i = 0; str[i]; i++) {
        if (isascii(str[i])) {
            count[(int)str[i]]++;
        }
    }

    printf("Character Frequency in the string:\n");
    for (int i = 0; i < 128; i++) {
        if (count[i] > 0) {
            printf("'%c' (ASCII %d): %d times\n", (char)i, i, count[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    calculateCharacterFrequency(str);

    return 0;
}
