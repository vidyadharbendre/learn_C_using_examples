#include <stdio.h>

int main() {
    int hour;

    printf("Enter the hour (in 24-hour format): ");
    scanf("%d", &hour);

    if (hour < 12) {
        printf("Good morning!\n");
    } else if (hour < 18) {
        printf("Good afternoon!\n");
    } else {
        printf("Good evening!\n");
    }

    return 0;
}

// The output of the above program is shown below:
/* . 
Enter the hour (in 24-hour format): 16
Good afternoon!
*/