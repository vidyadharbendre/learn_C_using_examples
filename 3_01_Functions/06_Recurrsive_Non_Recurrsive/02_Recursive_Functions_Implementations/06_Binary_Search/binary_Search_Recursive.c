#include <stdio.h>

int binarySearch(int farr[], int fleft, int fright, int ftarget);

int main() {
    int arr[] = {2, 3, 5, 8, 10, 15, 18};
    int target = 8;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, arrSize - 1, target);
    if (result == -1) {
        printf("Element is not present in the array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }
    return 0;
}

int binarySearch(int farr[], int fleft, int fright, int ftarget) {
    if (fright >= fleft) {
        int fmid = fleft + (fright - fleft) / 2;

        if (farr[fmid] == ftarget)
            return fmid;

        if (farr[fmid] > ftarget)
            return binarySearch(farr, fleft, fmid - 1, ftarget);

        return binarySearch(farr, fmid + 1, fright, ftarget);
    }

    return -1; // Element is not present in the array
}

// The output of the program is shown as below:
/*
Element is present at index 3
*/