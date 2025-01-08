#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free

// Definition of the StudentRecord structure
struct StudentRecord {
    int roll_no;      // Student Roll Number
    char name[50];    // Student Name
    float fees;       // Student Fees
};

int main() {
    // Allocate memory dynamically for a StudentRecord structure
    struct StudentRecord *student = (struct StudentRecord *)malloc(sizeof(struct StudentRecord));

    // Check if memory allocation was successful
    if (student == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Reading data from the keyboard
    printf("Enter Roll Number: ");
    scanf("%d", &student->roll_no);

    printf("Enter Name: ");
    scanf("%s", student->name);

    printf("Enter Fees: ");
    scanf("%f", &student->fees);

    // Displaying information
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student->roll_no);
    printf("Name: %s\n", student->name);
    printf("Fees: %.2f\n", student->fees);

    // Free the allocated memory
    free(student);

    return 0;
}

// The output of the above program is shown as below
/*
Enter Roll Number: 1
Enter Name: Vidyadhar
Enter Fees: 4500 

Student Information:
Roll Number: 1
Name: Vidyadhar
Fees: 4500.00
*/