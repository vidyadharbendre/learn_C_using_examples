#include <stdio.h>

void printArray(int farr[], int fsize);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5); // Passing the array and its size to the function
    // Output: 1 2 3 4 5
    return 0;
}

void printArray(int farr[], int fsize) {
    int fi;

    for (int fi = 0; fi < fsize; fi++) {
        printf("%d ", farr[fi]); // Printing all elements of the array
    }
}

// The output of the above program is shown below:
/*
1 2 3 4 5
*/
