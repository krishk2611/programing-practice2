#include <stdio.h>
#include <string.h>

// Function to print students with score > 5.0
void printAboveFive(struct student s[]) {
    printf("\nStudents with score greater than 5.0:\n");
    for(int i = 0; i < SIZE; i++) {
        if(s[i].score > 5.0) {
            printf("%s\n", s[i].name);
        }
    }
}
  return 0;
}
