#include <stdio.h>

void readNumbers(int fnumbersArray[], int fn);
void displayNumbers(int fnumbersArray[], int fn);

int main() {
    int n = 0, numbersArray[n];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    readNumbers(numbersArray, n);
    displayNumbers(numbersArray, n);

    return 0;
}

void readNumbers(int fnumbersArray[], int fn) {
    int fi;

    printf("Enter %d numbers:\n", fn);
    for (fi = 0; fi < fn; ++fi) {
        scanf("%d", &fnumbersArray[fi]);
    }
}

void displayNumbers(int fnumbersArray[], int fn) {
    int fi;
    printf("The numbers entered are: ");
    for (fi = 0; fi < fn; ++fi) {
        printf("%d ", fnumbersArray[fi]);
    }
    printf("\n");
}
