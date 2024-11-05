/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates arithmetic operations and operator precedence in C programming.
    It evaluates the complex expression 2 * ((a % 5) * (4 + (b - 3) / (c + 2))) to illustrate their usage.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 8, 15, and 4 respectively. 
    It evaluates the complex expression 2 * ((a % 5) * (4 + (b - 3) / (c + 2))) and stores the result in the variable 'result'.

    Explanation of Expression:
    - Given values: a = 8, b = 15, c = 4.
    - Evaluate innermost expressions first:
      - a % 5 = 8 % 5 = 3
      - b - 3 = 15 - 3 = 12
      - c + 2 = 4 + 2 = 6
      - (b - 3) / (c + 2) = 12 / 6 = 2
      - 4 + (b - 3) / (c + 2) = 4 + 2 = 6
      - (a % 5) * (4 + (b - 3) / (c + 2)) = 3 * 6 = 18
      - 2 * ((a % 5) * (4 + (b - 3) / (c + 2))) = 2 * 18 = 36
    - The value 36 is assigned to the variable 'result'.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com



*/

#include <stdio.h>

int main() {
    int a = 8;
    int b = 15;
    int c = 4;

    // Expression explanation incorporated in comments
    int result = 2 * ((a % 5) * (4 + (b - 3) / (c + 2))); // Expression evaluation

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is 

/*

result is : 36

# Expression explanation incorporated in comments
a = 8
b = 15
c = 4

# Expression evaluation
result = 2 * ((a % 5) * (4 + (b - 3) / (c + 2)))

# Explanation of the Expression:
# 1. Break down the expression based on operator precedence:
#    - Parentheses are evaluated first, followed by multiplication and division, and finally addition.
#    - The precedence of operators in the expression from highest to lowest is:
#      - Parentheses: ()
#      - Arithmetic: *, /, +
#
# 2. Evaluate the expression inside the innermost parentheses first:
#    a. (b - 3):
#       - Result: 15 - 3 = 12
#    
#    b. (c + 2):
#       - Result: 4 + 2 = 6

# Now we can rewrite the expression with these results:
# result = 2 * ((a % 5) * (4 + (12 / 6)))

# 3. Next, evaluate the division:
#    a. (12 / 6):
#       - Result: 2.0

# Now update the expression again:
# result = 2 * ((a % 5) * (4 + 2.0))

# 4. Evaluate (a % 5):
#    a. (a % 5):
#       - Result: 8 % 5 = 3 (remainder of 8 divided by 5)

# Update the expression:
# result = 2 * (3 * (4 + 2.0))

# 5. Evaluate the addition:
#    a. (4 + 2.0):
#       - Result: 6.0

# Update the expression again:
# result = 2 * (3 * 6.0)

# 6. Now evaluate the multiplication:
#    a. (3 * 6.0):
#       - Result: 18.0

# Update the expression again:
# result = 2 * 18.0

# 7. Finally, evaluate the multiplication:
#    a. (2 * 18.0):
#       - Result: 36.0

# 8. The final value of result is 36.0, which will be printed as an integer.

# Print the result of the expression
print("result is:", int(result))  # 'result is: 36' because result is an integer


*/