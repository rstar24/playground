#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if two strings match considering wildcards
bool isMatchWithWildcards(const char *str, const char *pattern) {
    int strLen = strlen(str);
    int patternLen = strlen(pattern);

    // Create a 2D table for dynamic programming
    bool dp[strLen + 1][patternLen + 1];
    memset(dp, false, sizeof(dp));

    // Empty pattern matches empty string
    dp[0][0] = true;

    // Handle wildcard '*' in the pattern
    for (int j = 1; j <= patternLen; j++) {
        if (pattern[j - 1] == '*') {
            dp[0][j] = dp[0][j - 1];
        }
    }

    // Fill the table using dynamic programming
    for (int i = 1; i <= strLen; i++) {
        for (int j = 1; j <= patternLen; j++) {
            if (pattern[j - 1] == '*' || pattern[j - 1] == '?' || pattern[j - 1] == str[i - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else if (pattern[j - 1] == '*') {
                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
            }
        }
    }

    return dp[strLen][patternLen];
}

int main() {
    char str[] = "hello world";
    char pattern[] = "he*o?wo*d";

    if (isMatchWithWildcards(str, pattern)) {
        printf("Strings match.\n");
    } else {
        printf("Strings do not match.\n");
    }

    return 0;
}
