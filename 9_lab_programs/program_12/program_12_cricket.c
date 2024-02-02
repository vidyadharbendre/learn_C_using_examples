#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to define a structure to represent a cricketer's information (name, runs,
average). 
Read the data corresponding to N Cricketer's in a structure array. 
The space for the array of structures should be determined at run-time by user input.
*/

// Structure to represent a cricketer's information
struct Cricketer {
    char name[50];
    int runs;
    float average;
};

int main() {
    int n;

    // Read the number of cricketers from the user
    printf("Enter the number of cricketers: ");
    scanf("%d", &n);

    // Allocate memory for an array of structures
    struct Cricketer *cricketers = (struct Cricketer *)malloc(n * sizeof(struct Cricketer));

    // Read cricketer information from the user
    for (int i = 0; i < n; ++i) {
        printf("\nEnter details for Cricketer %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", cricketers[i].name);

        printf("Runs: ");
        scanf("%d", &cricketers[i].runs);

        printf("Average: ");
        scanf("%f", &cricketers[i].average);
    }

    // Display cricketer information
    printf("\nCricketer Information:\n");
    for (int i = 0; i < n; ++i) {
        printf("\nDetails for Cricketer %d:\n", i + 1);
        printf("Name: %s\n", cricketers[i].name);
        printf("Runs: %d\n", cricketers[i].runs);
        printf("Average: %.2f\n", cricketers[i].average);
    }

    // Free the allocated memory
    free(cricketers);

    return 0;
}
