
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length_without = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // 1. Using string function
    int length_with = strlen(str);

    // 2. Without using string function
    while (str[i] != '\0') {
        length_without++;
        i++;
    }

    printf("Length using strlen() function: %d\n", length_with);
    printf("Length without using string function: %d\n", length_without);

    return 0;
}
