#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50 // Maximum number of students

int main() {
    char names[MAX_STUDENTS][50]; // Array of strings for student names
    
    // Example names
    strcpy(names[0], "Atharva");
    strcpy(names[1], "Bina");
    strcpy(names[2], "Chitra");
    // ... and so on
    
    // Accessing and printing names
    printf("Names of Students:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Student %d Name: %s\n", i + 1, names[i]);
    }

    return 0;
}
