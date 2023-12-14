#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("Freezing\n");
    } else if (temperature >= 0 && temperature < 20) {
        printf("Cold\n");
    } else if (temperature >= 20 && temperature < 30) {
        printf("Moderate\n");
    } else {
        printf("Hot\n");
    }

    return 0;
}

// The output of the above program is shown below:
/*  
Enter the temperature: 32
Hot
*/