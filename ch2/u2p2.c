#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {
    struct student s[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        scanf("%d %s %s %d %f", &s[i].rollno, s[i].name, s[i].department, &s[i].year_of_joining, &s[i].score);
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Roll No: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Department: %s\n", s[i].department);
        printf("Year of Joining: %d\n", s[i].year_of_joining);
        printf("Score: %.2f\n", s[i].score);
        printf("-----------------------------\n");
    }

    return 0;
}
