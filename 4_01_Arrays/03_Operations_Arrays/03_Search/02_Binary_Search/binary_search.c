#include <stdio.h>

int binarySearchRecursive(int farr[], int fleft, int fright, int ftarget);
int binarySearchNonRecursive(int farr[], int flength, int ftarget);
int getArrayLength();
void getAscendingOrderElements(int arr[], int length);
int getTargetElement();

int main() {
    int arrLength = getArrayLength();
    int arr[arrLength];
    getAscendingOrderElements(arr, arrLength);

    int target = getTargetElement();

    int resultRecursive = binarySearchRecursive(arr, 0, arrLength - 1, target);
    if (resultRecursive == -1) {
        printf("Element is not present in the array (using recursive approach)\n");
    } else {
        printf("Element is present at index %d (using recursive approach)\n", resultRecursive);
    }

    int resultNonRecursive = binarySearchNonRecursive(arr, arrLength, target);
    if (resultNonRecursive == -1) {
        printf("Element is not present in the array (using non-recursive approach)\n");
    } else {
        printf("Element is present at index %d (using non-recursive approach)\n", resultNonRecursive);
    }

    return 0;
}

int binarySearchRecursive(int farr[], int fleft, int fright, int ftarget) {
    if (fright >= fleft) {
        int fmid = fleft + (fright - fleft) / 2;

        if (farr[fmid] == ftarget)
            return fmid;

        if (farr[fmid] > ftarget)
            return binarySearchRecursive(farr, fleft, fmid - 1, ftarget);

        return binarySearchRecursive(farr, fmid + 1, fright, ftarget);
    }

    return -1; // Element is not present in the array
}

int binarySearchNonRecursive(int farr[], int flength, int ftarget) {
    int left = 0;
    int right = flength - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (farr[mid] == ftarget)
            return mid;

        if (farr[mid] < ftarget)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Element is not present in the array
}

int getArrayLength() {
    int flength;
    printf("Enter the length of the array: ");
    scanf("%d", &flength);
    return flength;
}

void getAscendingOrderElements(int farr[], int flength) {
    int fi;
    printf("Enter %d ascending order elements:\n", flength);
    for (fi = 0; fi < flength; ++fi) {
        scanf("%d", &farr[fi]);
    }
}

int getTargetElement() {
    int ftarget;
    printf("Enter the target element to search: ");
    scanf("%d", &ftarget);
    return ftarget;
}
