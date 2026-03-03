
#include <stdio.h>

int main() {
    int a[5], b[5], i;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Copy elements from array a to array b
    for (i = 0; i < 5; i++) {
        b[i] = a[i];
    }

    printf("Elements of second array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
