#include <stdio.h>
#include <string.h>

int main() {
    char username[] = "user123";
    char password[] = "pass456";
    char input_username[50];
    char input_password[50];

    printf("Enter username: ");
    fgets(input_username, sizeof(input_username), stdin);
    input_username[strcspn(input_username, "\n")] = '\0'; // Remove trailing newline

    printf("Enter password: ");
    fgets(input_password, sizeof(input_password), stdin);
    input_password[strcspn(input_password, "\n")] = '\0'; // Remove trailing newline

    if (strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0) {
        printf("Login successful\n");
    } else {
        printf("Invalid credentials\n");
    }

    return 0;
}

// The output of the aboe program is shown below:
/* . 
Enter username: user123
Enter password: pass456
Login successful
*/