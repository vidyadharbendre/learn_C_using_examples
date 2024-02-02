#include <stdio.h>

/*

Write a C program to read employee information (Name, Designation, Salary) from the user 
and write it to a file.

*/
struct Employee {
    char name[50];
    char designation[50];
    float salary;
};

int main() {
    // Declare variables
    struct Employee emp;

    // Open a file for writing
    FILE *filePtr;
    filePtr = fopen("employee_info.txt", "w");

    // Check if the file is opened successfully
    if (filePtr == NULL) {
        printf("Error opening the file!\n");
        return 1; // Exit program with an error
    }

    // Read employee information from the user
    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter Employee Designation: ");
    fgets(emp.designation, sizeof(emp.designation), stdin);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Write employee information to the file
    fprintf(filePtr, "Employee Name: %s", emp.name);
    fprintf(filePtr, "Employee Designation: %s", emp.designation);
    fprintf(filePtr, "Employee Salary: %.2f\n", emp.salary);

    // Close the file
    fclose(filePtr);

    printf("Employee information has been written to the file.\n");

    return 0;
}
