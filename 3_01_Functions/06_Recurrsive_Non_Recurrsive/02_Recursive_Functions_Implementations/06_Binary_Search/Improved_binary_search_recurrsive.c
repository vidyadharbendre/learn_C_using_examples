#include <stdio.h>

int binarySearch(int farr[], int fleft, int fright, int ftarget);
int getArrayLength();
void getAscendingOrderElements(int arr[], int length);
int getTargetElement();

int main() {
    int arrLength = getArrayLength();
    int arr[arrLength];
    getAscendingOrderElements(arr, arrLength);

    int target = getTargetElement();

    int result = binarySearch(arr, 0, arrLength - 1, target);
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

// The output of the above program is shown below:
/* . 
Enter the length of the array: 5
Enter 5 ascending order elements:
-9
-7
0
5
9
Enter the target element to search: 5
Element is present at index 3
*/