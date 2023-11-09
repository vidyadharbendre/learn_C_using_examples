# Type Conversion Vs Type Casting 
In C, the terms "type conversion" and "type casting" are often used interchangeably, but they can have slightly different connotations.

## Type Conversion
- Definition: Type conversion refers to the automatic conversion of one data type to another by the compiler during expressions or assignments.
- Implicit Conversion: It can be implicit, where the compiler automatically performs the conversion based on the context.
- Example: Converting an int to a float when assigning an integer value to a float variable.

## Type Casting
- Definition: Type casting is a more explicit way of converting one data type to another.
- Explicit Conversion: It involves the use of casting operators to explicitly specify the desired data type.
- Implicit or Explicit: Type casting can be implicit (automatic) or explicit (user-defined).
- Use Cases: Explicit type casting is useful when you want to override the default behavior and ensure a specific type conversion.
- Example: Casting a float to an int using (int).

In summary, type conversion is a broad term that includes both implicit and explicit conversions, while type casting specifically refers to the explicit conversion done by the programmer using casting operators. Implicit type conversion is often performed automatically by the compiler when needed.