#include <stdio.h>
#include <math.h>

void calculateStats(const double *arr, int n, double *sum, double *mean, double *stdDev);

int main() {
    int n;

    // Get the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare a fixed-size array
    double arr[n];

    // Read the elements from the user
    printf("Enter %d real numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    // Calculate statistics using pointers
    double sum, mean, stdDev;
    calculateStats(arr, n, &sum, &mean, &stdDev);

    // Display the results
    printf("Sum: %.2f\n", sum);
    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", stdDev);

    return 0;
}

// Function to calculate the sum, mean, and standard deviation
void calculateStats(const double *arr, int n, double *sum, double *mean, double *stdDev) {
    // Calculate sum
    *sum = 0.0;
    for (int i = 0; i < n; i++) {
        *sum += arr[i];
    }

    // Calculate mean
    *mean = *sum / n;

    // Calculate standard deviation
    *stdDev = 0.0;
    for (int i = 0; i < n; i++) {
        *stdDev += pow(arr[i] - *mean, 2);
    }
    *stdDev = sqrt(*stdDev / n);
}

// The output of the above program is shown as below
/*
Enter the number of elements: 3
Enter 3 real numbers:
2 3 4
Sum: 9.00
Mean: 3.00
Standard Deviation: 0.82
*/