#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    struct Employee *employees = (struct Employee *)malloc(numEmployees * sizeof(struct Employee));
    for (int i = 0; i < numEmployees; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("Enter age of employee %d: ", i + 1);
        scanf("%d", &employees[i].age);

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);
    }

    // Display employee details
    printf("\nEmployee Details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Name: %s, Age: %d, Salary: %.2f\n", employees[i].name, employees[i].age, employees[i].salary);
    }

    // Free allocated memory
    free(employees);

    return 0;
}
