#include <stdio.h>

int main() {
    int light;

    printf("Enter the light status (1 for red, 2 for yellow, 3 for green): ");
    scanf("%d", &light);

    switch (light) {
        case 1:
            printf("Stop\n");
            break;
        case 2:
            printf("Proceed with caution\n");
            break;
        case 3:
            printf("Go\n");
            break;
        default:
            printf("Malfunctioning light\n");
    }

    return 0;
}

//The output of the above program is shown below:
/* . 
Enter the light status (1 for red, 2 for yellow, 3 for green): 1
Stop
*/
