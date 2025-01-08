#include <stdio.h>
#include <stdlib.h>  // Required for malloc and free
#include <string.h>  // Required for strcpy

// Definition of the StudentRecord structure
struct StudentRecord {
    int roll_no;       // Student Roll Number
    char name[50];     // Student Name (fixed-size array)
    float fees;        // Student Fees
};

int main() {
    int n, i;

    // Get the number of student records from the user
    printf("Enter the number of student records: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n student records
    struct StudentRecord *ptr_to_struct_records = (struct StudentRecord *)malloc(n * sizeof(struct StudentRecord));
    if (ptr_to_struct_records == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &ptr_to_struct_records[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", ptr_to_struct_records[i].name);

        printf("Enter Fees: ");
        scanf("%f", &ptr_to_struct_records[i].fees);
    }

    // Display student information
    printf("\nStudent Information:\n");
    for (i = 0; i < n; i++) {
        printf("Record %d:\n", i + 1);
        printf("Roll Number: %d\n", ptr_to_struct_records[i].roll_no);
        printf("Name: %s\n", ptr_to_struct_records[i].name);
        printf("Fees: %.2f\n\n", ptr_to_struct_records[i].fees);
    }

    // Free the dynamically allocated memory
    free(ptr_to_struct_records);

    return 0;
}

// The output of the above program is shown as below
/*
Enter the number of student records: 2

Enter details for student 1:
Enter Roll Number: 1
Enter Name: Vidyadhar
Enter Fees: 4500

Enter details for student 2:
Enter Roll Number: 2
Enter Name: Poornima
Enter Fees: 4500

Student Information:
Record 1:
Roll Number: 1
Name: Vidyadhar
Fees: 4500.00

Record 2:
Roll Number: 2
Name: Poornima
Fees: 4500.00
*/
