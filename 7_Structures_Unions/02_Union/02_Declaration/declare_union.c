#include <stdio.h>

/* -----------------------------------------------------------------
   Union Declaration and Usage Explanation:
   
   A union is a user-defined data type that allows storing different 
   types of data in the same memory location. The key characteristic of 
   a union is that all its members share the same memory space. This 
   means that only one of its members can hold a value at any given time.
   
   Syntax for Declaring a Union:
     union UnionName {
         data_type member1;
         data_type member2;
         data_type member3;
         ... // More members can be added
     };
   
   Each member of the union occupies the same memory space, and the size of
   the union is the size of its largest member.
   
   Example Union Declaration:
   
     union Salary {
         float basicSalary;
         float hourlyWage;
         float monthlySalary;
     };
   
   The above union can store one of the following at a time:
   - basicSalary (float)
   - hourlyWage (float)
   - monthlySalary (float)
   
   A union can be used within structures or as standalone variables.
----------------------------------------------------------------- */

// Union to store salary details of an employee
union Salary {
    float basicSalary;    // Basic Salary
    float hourlyWage;     // Hourly Wage
    float monthlySalary;  // Monthly Salary
};

int main() {
    // Declare a union variable of type 'Salary'
    union Salary empSalary;

    // Assign a value to the 'basicSalary' member
    empSalary.basicSalary = 50000.0;
    // Print the value of basicSalary
    printf("Basic Salary: %.2f\n", empSalary.basicSalary);

    // Assign a value to the 'hourlyWage' member (overwrites the previous value)
    empSalary.hourlyWage = 20.0;
    // Print the value of hourlyWage
    printf("Hourly Wage: %.2f\n", empSalary.hourlyWage);

    // Assign a value to the 'monthlySalary' member (overwrites the previous value)
    empSalary.monthlySalary = 4000.0;
    // Print the value of monthlySalary
    printf("Monthly Salary: %.2f\n", empSalary.monthlySalary);

    return 0;
}

// The output of the above program is shown below:
/*
Basic Salary: 50000.00
Hourly Wage: 20.00
Monthly Salary: 4000.00
*/
