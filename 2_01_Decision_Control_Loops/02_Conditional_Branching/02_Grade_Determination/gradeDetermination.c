#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}

// The output of the above program is shown below:
/* .  
Enter the marks: 59
Grade: D
*/