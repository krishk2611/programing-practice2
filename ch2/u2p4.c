#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {
    struct student s[5], temp;

    for (int i = 0; i < 5; i++) {
        scanf("%d %s %s %d %f", &s[i].rollno, s[i].name, s[i].department, &s[i].year_of_joining, &s[i].score);
    }

    // Sort by score descending
    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 5; j++) {
            if (s[i].score < s[j].score) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n--- Sorted by Score (Descending) ---\n");
    for (int i = 0; i < 5; i++) {
        printf("%s - %.2f\n", s[i].name, s[i].score);
    }

    return 0;
}
