// 04_operators.c
// Demonstration of arithmetic, relational, and logical operators.

#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Arithmetic Operators
    printf("--- Arithmetic Operators ---\n");
    printf("Sum (a + b): %d\n", a + b);
    printf("Subtraction (a - b): %d\n", a - b);
    printf("Multiplication (a * b): %d\n", a * b);
    printf("Division (a / b): %d\n", a / b);
    printf("Modulus (remainder of division, a %% b): %d\n", a % b);

    // Relational Operators (result in 1 for true, 0 for false)
    printf("\n--- Relational Operators ---\n");
    printf("a > b: %d\n", a > b);   // Greater than
    printf("a < b: %d\n", a < b);   // Less than
    printf("a == b: %d\n", a == b); // Equal to
    printf("a != b: %d\n", a != b); // Not equal to

    // Logical Operators
    int x = 1; // True
    int y = 0; // False
    printf("\n--- Logical Operators ---\n");
    printf("Logical AND (x && y): %d\n", x && y);
    printf("Logical OR (x || y): %d\n", x || y);
    printf("Logical NOT (!x): %d\n", !x);

    return 0;
}