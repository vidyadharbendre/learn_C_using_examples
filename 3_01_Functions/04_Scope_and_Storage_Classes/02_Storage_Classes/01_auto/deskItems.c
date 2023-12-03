/*

Purpose:
In modern C programming, the auto keyword isn't typically used explicitly for local variables, as it's the default storage class for variables declared within a function. But conceptually, we can imagine a scenario to explain the auto storage class.

Consider a situation in a workplace where an employee is using a shared workspace to store their personal belongings. Each time the employee enters the workspace, they place their personal items on the desk.

Description:
The workday() function represents the start of the workday, where the employee places their personal items (represented by the deskItems variable) on the desk.

During the workday, the deskItems variable is accessible within the workday() function, as it's an auto variable.
Once the workday function scope ends (similar to the end of the workday when the employee leaves the workspace), the deskItems variable is no longer accessible or relevant.

The auto storage class, although the default in C, essentially signifies the automatic creation and destruction of variables within their enclosing block or function scope. In this analogy, the employee's personal items are automatically placed on the desk at the start of the workday (workday() function) and are no longer accessible or relevant once the workday ends (function scope exits).

*/

#include <stdio.h>

void workday();

int main() {
    workday(); // Start of the workday, placing items on the desk
    // Other work-related tasks...

    // End of the workday, leaving the workspace
    // The 'deskItems' (auto variable) is not accessible here as the workday function scope ended
    return 0;
}

void workday() {
    auto int deskItems = 3; // Personal items on the desk, 'auto' by default
    printf("Number of items on the desk: %d\n", deskItems);
}

//The output of the above program is shown as below;

/*
Number of items on the desk: 3
*/