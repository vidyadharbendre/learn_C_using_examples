#include <stdio.h>

int linearSearch(int arr[], int n, int target);

int main() {
    int arr[] = {2, 3, 5, 8, 10, 15, 18};
    int target = 15;
    int arrSize = 0;
    int result;

    arrSize = sizeof(arr) / sizeof(arr[0]);
    
    result = linearSearch(arr, arrSize, target);
    if (result == -1) {
        printf("Element is not present in the array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }
    return 0;
}

int linearSearch(int farr[], int fn, int ftarget) {
    int fi;
    for (fi = 0; fi < fn; fi++) {
        if (farr[fi] == ftarget) {
            return fi; // Element found at index i
        }
    }
    return -1; // Element not found
}

// The output of the above program is shown below:
/*  
Element is present at index 5
*/