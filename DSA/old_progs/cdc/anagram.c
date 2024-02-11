#include <stdio.h>
#include <string.h>
// THe strings given in input should only be in
// smallcase letters otherwise it won't work

int areAnagrams(const char *str1, const char *str2) {
    int count1[26] = {0};  // Assuming only lowercase letters, so 26 characters
    int count2[26] = {0};

    // Calculate character frequency counts for the first string
    for (int i = 0; str1[i]; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count1[str1[i] - 'a']++;
        }
    }

    // Calculate character frequency counts for the second string
    for (int i = 0; str2[i]; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count2[str2[i] - 'a']++;
        }
    }

    // Compare the character counts
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Not anagrams
        }
    }

    return 1; // Anagrams
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
