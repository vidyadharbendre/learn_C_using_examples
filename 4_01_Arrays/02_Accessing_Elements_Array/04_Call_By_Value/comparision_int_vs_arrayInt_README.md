# Comparison: Call by Value - Integer vs. Array of Integers

## Integer Passed by Value

### Code Example

```c
void modifyInt(int x);

int main() {
    int value = 10;

    printf("Original value: %d\n", value);

    modifyInt(value); // Pass the integer by value to the function

    printf("Modified by value: %d\n", value);

    return 0;
}

void modifyInt(int x) {
    x += 5; // Modify the value of the integer by adding 5
}
```
## Explanation

### Behavior: Passes a single integer value by value to the modifyInt function.
### Effect: Changes made to x inside modifyInt do not affect the original value in main.
### Reason: Passes a copy of the variable, allowing modifications within the function without altering the original variable.

## Array of Integers Passed by Value
### Code Example

```c
void modifyByValue(int fdata[], int fcount);

int main(){
    int count;
    printf("Enter total length of an Array: ");
    scanf("%d", &count);
    int data[count];

    printf("Enter data points for the array:\n");
    for (int i = 0; i < count; ++i) {
        scanf("%d", &data[i]);
    }

    // Display original array
    printf("Original ");
    displayData(data, count);

    // Modify array using call by value (copy)
    modifyByValue(data, count);
    printf("Modified by value ");
    displayData(data, count);

    return 0;
}

void modifyByValue(int fdata[], int fcount) {
    for (int i = 0; i < fcount; ++i) {
        fdata[i] += 5;  // Modifying elements of the array by adding 5 to each value
    }
}
```
## Explanation
### Behavior: Passes an array data by value to the modifyByValue function.
### Effect: Changes made to elements of fdata inside modifyByValue directly affect the original data array in main.
### Reason: Arrays passed to functions often decay into pointers to their first elements, and modifications to these elements reflect in the original array.

## Summary
# Integer by Value: Modifications within the function do not impact the original variable.

# Array by Value: Modifications to array elements in the function affect the original array due to pointer-like behavior.