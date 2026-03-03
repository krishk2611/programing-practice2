
#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Name printed vertically:\n");

    while (name[i] != '\0') {
        printf("%c\n", name[i]);
        i++;
    }

    return 0;
}
