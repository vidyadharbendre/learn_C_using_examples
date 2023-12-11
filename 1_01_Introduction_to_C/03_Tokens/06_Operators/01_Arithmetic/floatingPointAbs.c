#include <stdio.h>
#include <math.h>

int main() {
    double value = -5.67;
    double absoluteValue = fabs(value);

    printf("The absolute value of %lf is %lf\n", value, absoluteValue);

    return 0;
}