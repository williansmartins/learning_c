// 02_variables.c
// This program demonstrates how to declare and use variables of different types.

#include <stdio.h>

int main() {
    // Declaring variables
    int idade;             // For integer numbers
    float altura;          // For floating-point numbers (with decimal places)
    char inicial;          // For a single character

    // Assigning values to the variables
    idade = 25;
    altura = 1.75;
    inicial = 'J';

    // Printing the variable values
    // `%d` is a format specifier for integers.
    // `%f` is for floats.
    // `%c` is for chars.
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura); // `%.2f` limits to 2 decimal places
    printf("Inicial do nome: %c\n", inicial);

    return 0;
}