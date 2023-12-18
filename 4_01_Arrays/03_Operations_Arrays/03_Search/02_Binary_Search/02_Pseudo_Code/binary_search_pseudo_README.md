## Pseudocode

```plaintext
function binarySearch(arr, target):
    left = 0
    right = length of arr - 1

    while left <= right:
        mid = left + (right - left) / 2

        if arr[mid] == target:
            return mid

        if target < arr[mid]:
            right = mid - 1
        else:
            left = mid + 1

    return -1
