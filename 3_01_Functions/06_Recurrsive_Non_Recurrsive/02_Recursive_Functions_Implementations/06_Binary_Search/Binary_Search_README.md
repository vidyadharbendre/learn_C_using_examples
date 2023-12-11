# Recursive Functions README

## Understanding Base Case and Recursive Case

### Base Case

The base case is the termination condition that halts the recursive calls within a function. It signifies the simplest scenario where the function returns a value without further recursive calls. The primary purpose of the base case is to prevent infinite recursion and to establish an exit condition for the recursive function.

### Recursive Case

The recursive case encompasses the actual recursive process. Within this part of the function, it calls itself with a smaller or simpler version of the original problem until it reaches the base case. By breaking down the problem into smaller instances, the recursive case facilitates the gradual resolution of the problem at hand.

#### Example: Binary Search

Consider a function to perform a binary search on a sorted array:

```c
int binarySearch(int arr[], int start, int end, int target) {
    if (end >= start) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            return binarySearch(arr, start, mid - 1, target);
        }
        return binarySearch(arr, mid + 1, end, target);
    }
    return -1;
}
