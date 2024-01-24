#include <stdio.h>

// Union to represent different types of salaries
union Salary {
    float basicSalary;
    float hourlyWage;
    float monthlySalary;
};

// Structure to represent employee details
struct Employee {
    char name[50];
    int employeeId;
    union Salary salary; // Union for storing salary details
};

int main() {
    // Initialize an array of Employee structures with values
    struct Employee employees[3] = {
        {"Vidyadhar Bendre", 101, {500000.0}},         // Employee 1 with basic salary
        {"Atharva Bendre", 102, {.hourlyWage = 200.0}}, // Employee 2 with hourly wage
        {"Vivek Bendre", 103, {.monthlySalary = 30000.0}} // Employee 3 with monthly salary
    };

    // Display salary details of each employee
    printf("Salary Details of 3 Employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Employee ID: %d\n", employees[i].employeeId);

        // Display salary based on the chosen type
        if (employees[i].salary.basicSalary != 0.0) {
            printf("Basic Salary: %.2f\n", employees[i].salary.basicSalary);
        } else if (employees[i].salary.hourlyWage != 0.0) {
            printf("Hourly Wage: %.2f\n", employees[i].salary.hourlyWage);
        } else {
            printf("Monthly Salary: %.2f\n", employees[i].salary.monthlySalary);
        }

        printf("\n");
    }

    return 0;
}

// The output of the above program is shown as below
/*
Salary Details of 3 Employees:
Employee 1:
Name: Vidyadhar Bendre
Employee ID: 101
Basic Salary: 500000.00

Employee 2:
Name: Atharva Bendre
Employee ID: 102
Basic Salary: 200.00

Employee 3:
Name: Vivek Bendre
Employee ID: 103
Basic Salary: 30000.00
*/