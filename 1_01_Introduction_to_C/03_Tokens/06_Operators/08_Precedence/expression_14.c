/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates arithmetic operators and comparison operators in C programming.
    It evaluates the complex expression 100 / 20 <= 10 - 5 + 100 % 10 - 20 == 5 >= 1 != 20 to illustrate their usage.

    Description:
    The program evaluates the complex expression 100 / 20 <= 10 - 5 + 100 % 10 - 20 == 5 >= 1 != 20 and stores the result in the variable 'result'.

    Explanation of Expression:
    - Evaluation starts from left to right based on operator precedence.
    - 100 / 20 evaluates to true (5 <= 5), which is true.
    - 10 - 5 + 100 % 10 - 20 evaluates to true (5 + 0 - 20 == 5), which is true.
    - Combining these conditions using comparison operators (<=, ==, >=, !=): true && true
    - The expression resolves to true.
    - The value true is assigned to the variable 'result'.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com


*/

#include <stdio.h>

int main() {
    // Expression explanation incorporated in comments
    int result = 100 / 20 <= 10 - 5 + 100 % 10 - 20 == 5 >= 1 != 20; // Expression evaluation

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is

/*

result is : 1

# Expression explanation incorporated in comments
result = 100 / 20 <= 10 - 5 + 100 % 10 - 20 == 5 >= 1 != 20  # Expression evaluation

# Explanation of the Expression:
# 1. Break down the expression based on operator precedence:
#    - Arithmetic operations are performed first, followed by comparison operations.
#    - The precedence of operators in the expression from highest to lowest is:
#      - Arithmetic: /, %, -, +
#      - Comparison: <=, ==, >=, !=

# 2. Evaluate the arithmetic operations first:
#    a. 100 / 20:
#       - Result: 5.0
#    
#    b. 100 % 10:
#       - Result: 0 (remainder of 100 divided by 10)
#    
#    c. 10 - 5 + 0 - 20:
#       - First calculate 10 - 5 = 5
#       - Then 5 + 0 = 5
#       - Finally 5 - 20 = -15

# Now, we can rewrite the expression with evaluated results:
# result = 5.0 <= -15 == 5 >= 1 != 20

# 3. Evaluate the comparisons from left to right:
#    a. 5.0 <= -15:
#       - Result: False (5.0 is not less than or equal to -15)
#
#    b. False == 5:
#       - Result: False (False is not equal to 5)
#
#    c. False >= 1:
#       - Result: False (False is not greater than or equal to 1)
#
#    d. False != 20:
#       - Result: True (False is not equal to 20)

# 4. The final value of result is True.

# Print the result of the expression
print("result is:", int(result))  # 'result is: 1' because True is equivalent to 1 in Python

*/