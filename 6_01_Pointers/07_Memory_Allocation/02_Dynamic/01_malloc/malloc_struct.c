#include <stdio.h>
#include <stdlib.h>

// Structure to represent a student record
struct Student {
    int roll_no;
    float marks;
};

int main() {
    // Declare an array of structures
    struct Student *studentArray;
    int numStudents = 3; // Number of student records

    // Allocating memory for an array of structures
    studentArray = (struct Student *)malloc(numStudents * sizeof(struct Student));

    // Checking if memory allocation was successful
    if (studentArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Using the allocated memory
    for (int i = 0; i < numStudents; i++) {
        // Assigning values to roll_no and marks
        studentArray[i].roll_no = i + 1;
        studentArray[i].marks = 75.5 + i; // Just an example, you can input actual values
    }

    // Displaying the values
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d - Roll Number: %d, Marks: %.2f\n", i + 1, studentArray[i].roll_no, studentArray[i].marks);
    }

    // Print the address of the allocated memory using (void *)
    printf("Address of allocated memory: %p\n", (void *)studentArray);


    // Freeing the allocated memory
    free(studentArray);

    return 0;
}

// The output of the above program is shown as below
/*
Student 1 - Roll Number: 1, Marks: 75.50
Student 2 - Roll Number: 2, Marks: 76.50
Student 3 - Roll Number: 3, Marks: 77.50
Address of allocated memory: 0x129605fc0
*/