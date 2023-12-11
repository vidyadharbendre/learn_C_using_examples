#include <stdio.h>

#define MAX_EMPLOYEES 100 // Maximum number of employees

int main() {
    int employeeIDs[MAX_EMPLOYEES] = {1001, 1002, 1003, 1020}; // Example employee IDs
    
    // Accessing and printing employee IDs
    printf("Employee IDs:\n");
    for (int i = 0; i < 20; ++i) {
        printf("Employee %d ID: %d\n", i + 1, employeeIDs[i]);
    }

    return 0;
}

// The output of the above program is shown as below:
/*
Employee IDs:
Employee 1 ID: 1001
Employee 2 ID: 1002
Employee 3 ID: 1003
Employee 4 ID: 1020
Employee 5 ID: 0
Employee 6 ID: 0
Employee 7 ID: 0
Employee 8 ID: 0
Employee 9 ID: 0
Employee 10 ID: 0
Employee 11 ID: 0
Employee 12 ID: 0
Employee 13 ID: 0
Employee 14 ID: 0
Employee 15 ID: 0
Employee 16 ID: 0
Employee 17 ID: 0
Employee 18 ID: 0
Employee 19 ID: 0
Employee 20 ID: 0
*/
