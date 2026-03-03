#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    // 1. Using string function
    length = strlen(str);
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("Using string function: The string is a palindrome.\n");
    } else {
        printf("Using string function: The string is not a palindrome.\n");
    }

    // 2. Without using string function
    int left = 0, right = 0;
    while (str[right] != '\0') right++; // Find length manually
    right--; // last index

    palindrome = 1; // Reset flag
    while (left < right) {
        if (str[left] != str[right]) {
            palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (palindrome) {
        printf("Without string function: The string is a palindrome.\n");
    } else {
        printf("Without string function: The string is not a palindrome.\n");
    }

    return 0;
}

