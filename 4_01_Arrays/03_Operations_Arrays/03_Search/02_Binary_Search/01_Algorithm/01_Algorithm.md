# Binary Search Algorithm

Binary search is an efficient algorithm used to search for an element in a sorted array. It works by repeatedly dividing the search interval in half.

## Algorithm Steps

### Input

- Sorted array.
- Target element to search.

### Initialization

- Set `left` as the starting index of the array.
- Set `right` as the ending index of the array.

### Binary Search Process

1. **While** `left` is less than or equal to `right`:
    - Calculate `mid` as the middle index: `mid = left + (right - left) / 2`.
    - Compare the element at the middle index `mid` with the target element:
        - If the middle element matches the target:
            - **Return** `mid` as the index where the target element is found.
        - If the target is less than the middle element:
            - Update `right = mid - 1` to search in the left half.
        - If the target is greater than the middle element:
            - Update `left = mid + 1` to search in the right half.

### Output

- If the target is not found after the search:
    - **Return** `-1` to indicate that the element is not present in the array.

## Example Usage

To use the binary search algorithm:
- Provide a sorted array and the target element.
- Call the binary search function passing these parameters.
- Handle the returned index or value (-1 if not found) appropriately.

