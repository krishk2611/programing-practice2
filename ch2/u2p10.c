#include <stdio.h>

struct address {
    char city[20];
    char state[20];
    int pincode;
};

struct student {
    int rollno;
    char name[20];
    struct address addr;  // Nested structure
};

int main() {
    struct student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.rollno);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter City: ");
    scanf("%s", s.addr.city);
    printf("Enter State: ");
    scanf("%s", s.addr.state);
    printf("Enter Pincode: ");
    scanf("%d", &s.addr.pincode);
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.addr.city);
    printf("State: %s\n", s.addr.state);
    printf("Pincode: %d\n", s.addr.pincode);

    return 0;
}
