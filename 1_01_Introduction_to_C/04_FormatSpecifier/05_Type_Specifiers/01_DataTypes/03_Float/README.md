# Floating-Point Data Types in C

In C programming, floating-point data types such as `float` and `double` are used to represent real numbers with fractional parts. It's important to note that, unlike integer data types, floating-point data types do not have direct equivalents to `short` or `unsigned` for controlling range or precision. Here's a brief overview:

- There is no equivalent to `short` for floating-point data types. The `short` data type is used to specify a shorter range of values for integers, while floating-point types are primarily concerned with representing real numbers, which include fractional components.
- Similarly, the `unsigned` keyword is used to represent non-negative values for integer data types. However, there is no direct equivalent for floating-point numbers. Floating-point data types inherently support both positive and negative values, and the range is determined by the data type itself.

In C, you can control the range and precision of floating-point numbers primarily by choosing the appropriate data type (`float`, `double`, or `long double`) and using format specifiers when displaying these numbers with the `printf` function. The format specifiers allow you to control the number of decimal places and other formatting aspects. The choice of the specific data type determines the range, precision, and memory usage.

For more information and practical examples, please refer to the program documentation and example provided in the other README file.
