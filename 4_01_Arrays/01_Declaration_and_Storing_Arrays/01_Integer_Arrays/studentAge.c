#include <stdio.h>

#define MAX_STUDENTS 50 // Maximum number of students

int main() {
    int studentAges[MAX_STUDENTS] = {21, 20, 22, 23, 19}; // Example student ages
    
    // Accessing and printing student ages
    printf("Student Ages:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Student %d: %d years old\n", i + 1, studentAges[i]);
    }

    return 0;
}

// The output of the above program is shown as below:
/* .  
Student Ages:
Student 1: 21 years old
Student 2: 20 years old
Student 3: 22 years old
Student 4: 23 years old
Student 5: 19 years old
*/
