#include <stdio.h>
#include <stdbool.h>

#define MAX_TASKS 20 // Maximum number of tasks

int main() {
    bool taskCompletion[MAX_TASKS] = {true, true, false, false, true}; // Example task completion
    
    // Accessing and printing task completion status
    printf("Task Completion Status:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Task %d Completion: %s\n", i + 1, taskCompletion[i] ? "completed" : "pending");
    }

    return 0;
}
