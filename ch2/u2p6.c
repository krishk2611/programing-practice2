#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

void print_joined_2019(struct student s[], int n) {
    printf("\nStudents who joined in 2019:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].year_of_joining == 2019) {
            printf("%s (%d)\n", s[i].name, s[i].rollno);
        }
    }
}

int main() {
    struct student s[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d %s %s %d %f", &s[i].rollno, s[i].name, s[i].department, &s[i].year_of_joining, &s[i].score);
    }

    print_joined_2019(s, 5);

    return 0;
}
