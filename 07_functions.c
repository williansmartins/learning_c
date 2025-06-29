// 07_functions.c
// How to create and use your own functions to organize code.

#include <stdio.h>

// Function declaration (prototype)
// This tells the compiler that the `soma` function exists.
int soma(int a, int b);

// The `main` function comes first
int main() {
    int num1 = 10;
    int num2 = 20;

    // Calling the `soma` function and storing the result
    int resultado = soma(num1, num2);

    printf("A soma de %d e %d é %d\n", num1, num2, resultado);

    return 0;
}

// Function definition
// Here is the code that the function executes.
int soma(int a, int b) {
    // The `return` keyword sends the value back to the caller.
    return a + b;
}