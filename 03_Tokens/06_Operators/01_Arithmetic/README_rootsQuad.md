# Quadratic Equation Solver

**Author:** Vidyadhar Bendre
**Email:** vidyadhar.bendre@gmail.com
**Date:** 5 November, 2023

## Purpose

This program calculates the roots of a quadratic equation of the form ax^2 + bx + c = 0, where the user provides coefficients a, b, and c. It calculates the discriminant and determines the type of roots (real and distinct, real and equal, or complex) and computes the roots accordingly.

## Description

The program prompts the user to enter coefficients a, b, and c. It then calculates the discriminant using the formula `discriminant = b^2 - 4ac`. Depending on the value of the discriminant, the program computes the roots of the quadratic equation:

- If the discriminant is greater than 0, it calculates two real and distinct roots.
- If the discriminant is equal to 0, it calculates one real root, and both roots are the same.
- If the discriminant is less than 0, it calculates complex roots with real and imaginary parts.

The program displays the roots based on the type of roots it calculates.

## Usage

1. Compile the program: `gcc rootsQuad.c -o rootsQuad`
2. Run the program: `./rootsQuad`
3. Follow the prompts to enter coefficients a, b, and c.
4. The program will calculate and display the roots of the quadratic equation.
