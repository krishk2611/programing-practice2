#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int i, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // 1. Using string function (strrev)
    strcpy(temp, str);   // Copy original string
    strrev(temp);        // Reverse using function
    printf("Reverse using string function: %s\n", temp);

    // 2. Without using string function
    length = strlen(str);
    printf("Reverse without string function: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

