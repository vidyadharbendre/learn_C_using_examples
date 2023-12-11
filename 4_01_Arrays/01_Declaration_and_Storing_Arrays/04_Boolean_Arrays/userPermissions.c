#include <stdio.h>
#include <stdbool.h>

#define MAX_USERS 50 // Maximum number of users

int main() {
    bool userPermissions[MAX_USERS] = {true, false, true, false, true}; // Example user permissions
    
    // Accessing and printing user permissions
    printf("User Permissions:\n");
    for (int i = 0; i < 5; ++i) {
        printf("User %d Permission: %s\n", i + 1, userPermissions[i] ? "true" : "false");
    }

    return 0;
}
