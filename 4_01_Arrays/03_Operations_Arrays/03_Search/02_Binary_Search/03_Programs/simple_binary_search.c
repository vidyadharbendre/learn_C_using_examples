#include <stdio.h>

int binarySearch(int f_arr[], int f_left_start, int f_right_end, int f_target_search);

int main() {
    int arr[] = {2, 3, 5, 8, 10, 15, 18};
    int target = 15;
    int arrSize = 0;
    int result = -1;
    
    arrSize = sizeof(arr) / sizeof(arr[0]);

    //int binarySearch(int f_arr[], int f_left_start, int f_right_end, int f_target_search);

    result = binarySearch(arr, 0, arrSize - 1, target);
    if (result == -1) {
        printf("Element is not present in the array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }
    return 0;
}

int binarySearch(int f_arr[], int f_left_start, int f_right_end, int f_target_search) {
    int f_mid_center;

    while (f_left_start <= f_right_end) {
        f_mid_center = f_left_start + (f_right_end - f_left_start) / 2;

        // Check if the target is at the middle
        if (f_arr[f_mid_center] == f_target_search)
            return f_mid_center;

        // If the target is greater, ignore the left half
        if (f_arr[f_mid_center] < f_target_search)
            f_left_start = f_mid_center + 1;
        // If the target is smaller, ignore the right half
        else
            f_right_end = f_mid_center - 1;
    }

    // Element not found
    return -1;
}
