# Operator Precedence in C Programming

In C programming, understanding operator precedence is vital as it determines the order in which operators are evaluated within an expression. Below is a breakdown of operator precedence from highest to lowest:

1. Parentheses ()
   - Highest precedence; expressions within parentheses are evaluated first.
     Example: `(a + b) * c`

2. Postfix operators ++ --
   - Increment and decrement operators applied after the variable's value is used.
     Example: `a++, b--`

3. Prefix operators ++ -- (Unary)
   - Increment and decrement operators applied before the variable's value is used.
     Example: `++a, --b`

4. Unary operators + - ! ~
   - Unary plus, minus, logical NOT, bitwise NOT.
     Example: `-a, !b`

5. Multiplication * Division / Modulus %
   - Multiplication, division, remainder operators.
     Example: `a * b, c / d, e % f`

6. Addition + Subtraction -
   - Addition and subtraction operators.
     Example: `a + b, c - d`

7. Shift operators << >>
   - Bitwise left shift and bitwise right shift operators.
     Example: `a << b, c >> d`

8. Relational operators < > <= >=
   - Less than, greater than, less than or equal to, greater than or equal to.
     Example: `a < b, c >= d`

9. Equality operators == !=
   - Equal to and not equal to operators.
     Example: `a == b, c != d`

10. Bitwise AND &
    - Bitwise AND operator.
      Example: `a & b`

11. Bitwise XOR ^
    - Bitwise XOR (exclusive OR) operator.
      Example: `c ^ d`

12. Bitwise OR |
    - Bitwise OR operator.
      Example: `e | f`

13. Logical AND &&
    - Logical AND operator.
      Example: `a && b`

14. Logical OR ||
    - Logical OR operator.
      Example: `c || d`

15. Conditional ? :
    - Ternary conditional operator.
      Example: `condition ? value1 : value2`

16. Assignment = += -= *= /= %= &= ^= |= <<= >>=
    - Assignment operators.
      Example: `a = b, c += d`

17. Comma ,
    - Comma operator used to separate expressions.
      Example: `a, b`

## Usage Tips
Understanding operator precedence is crucial in C programming to ensure that expressions are evaluated correctly. When in doubt, using parentheses () can explicitly specify the order of evaluation.

This guide serves as a quick reference for the precedence of operators in C programming.
