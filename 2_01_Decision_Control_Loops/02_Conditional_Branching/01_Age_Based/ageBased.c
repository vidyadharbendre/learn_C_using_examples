#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are not an adult.\n");
    }

    return 0;
}

// The output of the above program is shown below:
/* .  
Enter your age: 53
You are an adult.
*/