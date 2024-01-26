#include <stdio.h>
#include <stdlib.h>

// Structure to represent employee details
struct Employee {
    char name[50];
    char designation[50];
    float salary;
};

int main() {
    // Open a file for writing
    FILE *ptrtoFILE = fopen("employee_data.txt", "w");

    // Check if the file was opened successfully
    if (ptrtoFILE == NULL) {
        printf("Error opening file for writing.\n");
        return 1; // Exit with an error code
    }

    // Declare an array of Employee structures to store data for multiple employees
    struct Employee employees[3];

    // Read employee information from the user
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Designation: ");
        scanf("%s", employees[i].designation);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        // Write employee information to the file
        fprintf(ptrtoFILE, "Employee %d:\n", i + 1);
        fprintf(ptrtoFILE, "Name: %s\n", employees[i].name);
        fprintf(ptrtoFILE, "Designation: %s\n", employees[i].designation);
        fprintf(ptrtoFILE, "Salary: %.2f\n\n", employees[i].salary);
    }

    // Close the file
    fclose(ptrtoFILE);

    printf("Employee information has been written to the file 'employee_data.txt'.\n");

    return 0;
}

// The output of the above file is shown as below
/*
Enter details for Employee 1:
Name: Vidyadhar
Designation: Professor
Salary: 100000
Enter details for Employee 2:
Name: Atharva
Designation: Asst.Professor
Salary: 450000
Enter details for Employee 3:
Name: Vivke
Designation: Asso.Professor
Salary: 890000
Employee information has been written to the file 'employee_data.txt'.
*/