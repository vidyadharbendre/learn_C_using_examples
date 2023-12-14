#include <stdio.h>

int main() {
    int choice;

    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Selected: Option 1\n");
            break;
        case 2:
            printf("Selected: Option 2\n");
            break;
        case 3:
            printf("Selected: Option 3\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

// The output of the above program is shown below:
/* .  
Enter your choice (1, 2, or 3): 3
Selected: Option 3
*/
