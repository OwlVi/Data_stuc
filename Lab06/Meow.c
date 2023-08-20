#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>

#define MAX_STRING_LENGTH 100

int main() {
    int t, n;
    scanf("%d", &t);

    char results[t][4]; 
    char s[MAX_STRING_LENGTH];
    regex_t pattern;
    regcomp(&pattern, "^[mM]+[eE]+[oO]+[wW]+$", REG_EXTENDED);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        scanf("%s", s);

        int match_result = regexec(&pattern, s, 0, NULL, 0);
        if (match_result == 0) {
            strcpy(results[i], "YES");
        } else {
            strcpy(results[i], "NO");
        }
    }

    for (int i = 0; i < t; i++) {
        printf("%s\n", results[i]);
    }

    regfree(&pattern);
    return 0;
}
