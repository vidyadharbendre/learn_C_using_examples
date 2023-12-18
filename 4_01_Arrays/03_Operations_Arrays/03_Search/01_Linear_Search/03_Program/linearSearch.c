#include <stdio.h>

int linearSearch(int farr[], int flength, int ftarget);
int recursiveLinearSearch(int farr[], int flength, int ftarget);
void getArrayElements(int arr[], int length);
int getArrayLength();
int getTargetElement();

int main() {
    int arrLength = getArrayLength();
    int arr[arrLength];
    
    getArrayElements(arr, arrLength);

    int target = getTargetElement();

    int result = linearSearch(arr, arrLength, target);
    if (result == -1) {
        printf("Element is not present in the array (using linear search)\n");
    } else {
        printf("Element is present at index %d (using linear search)\n", result);
    }

    int resultRecursive = recursiveLinearSearch(arr, arrLength, target);
    if (resultRecursive == -1) {
        printf("Element is not present in the array (using recursive linear search)\n");
    } else {
        printf("Element is present at index %d (using recursive linear search)\n", resultRecursive);
    }

    return 0;
}

int linearSearch(int farr[], int flength, int ftarget) {
    for (int i = 0; i < flength; ++i) {
        if (farr[i] == ftarget)
            return i;
    }
    return -1; // Element is not present in the array
}

int recursiveLinearSearch(int farr[], int flength, int ftarget) {
    if (flength < 0)
        return -1; // Element not found

    if (farr[flength - 1] == ftarget)
        return flength - 1;

    return recursiveLinearSearch(farr, flength - 1, ftarget);
}

void getArrayElements(int arr[], int length) {
    printf("Enter %d elements:\n", length);
    for (int i = 0; i < length; ++i) {
        scanf("%d", &arr[i]);
    }
}

int getArrayLength() {
    int flength;
    printf("Enter the length of the array: ");
    scanf("%d", &flength);
    return flength;
}

int getTargetElement() {
    int ftarget;
    printf("Enter the target element to search: ");
    scanf("%d", &ftarget);
    return ftarget;
}

// The output of the above program is shown as below:
/* . 
Enter the length of the array: 10
Enter 10 elements:
11
-89
4
32
5
90
2
56
7
99
Enter the target element to search: 7
Element is present at index 8 (using linear search)
Element is present at index 8 (using recursive linear search)
*/