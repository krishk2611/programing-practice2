#include <stdio.h>
#include <string.h>

struct student_struct {
    int roll;
    float marks;
    char grade;
};

union student_union {
    int roll;
    float marks;
    char grade;
};

int main() {
    struct student_struct s;
    union student_union u;

    printf("Size of structure: %lu\n", sizeof(s));
    printf("Size of union: %lu\n", sizeof(u));

    return 0;
}
