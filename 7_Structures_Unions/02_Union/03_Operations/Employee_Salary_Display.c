#include <stdio.h>

// The following code demonstrates the usage of both structure and union in C:

/*
Core Differences Between Structure and Union:

1. **Memory Allocation:**
   - **Structure:** Each member of a structure has its own separate memory allocation. The total memory used by a structure is the sum of the memory sizes of all its members.
   - **Union:** All members of a union share the same memory location. The total memory used by a union is the size of its largest member, because only one member can hold a value at a time.

2. **Storage:**
   - **Structure:** A structure can store values for multiple members at the same time, and each member has its own storage space.
   - **Union:** A union can store values for multiple members, but only one member can hold a value at a time. Assigning a value to one member overwrites the value of the other members.

3. **Use Cases:**
   - **Structure:** Useful when you need to store multiple different types of data, and you need to access all of them at the same time.
   - **Union:** Useful when you need to store different types of data, but only need to use one of them at a time, saving memory.

4. **Example from the code:**
   - The **union `Salary`** allows storing only one type of salary at a time (basic salary, hourly wage, or monthly salary) for an employee, whereas the **structure `Employee`** holds multiple fields like `name`, `employeeId`, and a union `salary` with different types of salary details.

*/

#include <stdio.h>

// Union to represent different types of salaries
union Salary {
    float basicSalary;    // Employee's basic salary
    float hourlyWage;     // Employee's hourly wage
    float monthlySalary;  // Employee's monthly salary
};

// Structure to represent employee details
struct Employee {
    char name[50];         // Employee name
    int employeeId;        // Employee ID
    union Salary salary;   // Union for storing salary details
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

/*
The output of the above program is as follows:

Salary Details of 3 Employees:
Employee 1:
Name: Vidyadhar Bendre
Employee ID: 101
Basic Salary: 500000.00

Employee 2:
Name: Atharva Bendre
Employee ID: 102
Hourly Wage: 200.00

Employee 3:
Name: Vivek Bendre
Employee ID: 103
Monthly Salary: 30000.00
*/

/*
Core Difference Between Structure and Union in the Context of the Code:

1. **Structure:** In this code, the structure `Employee` is used to store multiple pieces of information about each employee: `name`, `employeeId`, and the `salary` which is a union. All these members (name, employeeId, salary) have their own memory allocation and can hold their respective values independently.

2. **Union:** The union `Salary` allows only one type of salary information (basic salary, hourly wage, or monthly salary) to be stored at any given time. In the code, for each employee, we are assigning a value to one member of the union. When we initialize `Salary` with one member (e.g., `basicSalary`), the other members (`hourlyWage` and `monthlySalary`) are effectively overwritten or not used at that moment.
   
In this program, `Salary` helps manage different salary types in a memory-efficient way. Although an employee can have different types of salary, only one of them is stored at any time, keeping the memory usage low. The structure `Employee`, on the other hand, allows us to store both personal details and salary details together in a well-organized manner.

*/

