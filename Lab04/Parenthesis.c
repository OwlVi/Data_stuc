#include <stdio.h>
#include <stdbool.h>

bool isParentheses(char* str) {
    int count = 0;

    for (char* p = str; *p != '\0'; p++) {
        if (*p == '(') {
            count++;
        } else if (*p == ')') {
            count--;
        }

        if (count < 0) {
            return false;
        }
    }

    return count == 0;
}

int main() {
    char input[1001];
    scanf("%s", input);

    if (isParentheses(input)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

}
