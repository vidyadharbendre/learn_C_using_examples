#include <stdio.h>

#define MAX_SIZE 10

int getCount();
void getData(int fdata[], int fcount);
void displayData(int fdata[], int fcount);

int main(){
    int count;
    int data[MAX_SIZE]; // Defined an array with a maximum size

    count = getCount();

    if (count > MAX_SIZE) {
        printf("Input count exceeds the maximum size allowed.\n");
        return 1;
    }

    getData(data, count);
    displayData(data, count);

    return 0;
}

// Function to get the count of data points from the user
int getCount(){
    int fcount;
    printf("Enter total length of the array: ");
    scanf("%d", &fcount);
    return fcount;
}

// Function to get data points from the user
void getData(int fdata[], int fcount) {
    for (int fi = 0; fi < fcount; ++fi) {
        printf("Enter data point %d: ", fi + 1);
        scanf("%d", &fdata[fi]);
    }
}

// Function to display the array elements
void displayData(int fdata[], int fcount) {
    printf("Elements in the array are: ");
    for (int i = 0; i < fcount; ++i) {
        printf("%d ", fdata[i]);
    }
    printf("\n");
}
