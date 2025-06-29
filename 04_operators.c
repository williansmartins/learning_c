// 04_operators.c
// Demonstração dos operadores aritméticos, relacionais e lógicos.

#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Operadores Aritméticos
    printf("--- Operadores Aritméticos ---\n");
    printf("Soma (a + b): %d\n", a + b);
    printf("Subtração (a - b): %d\n", a - b);
    printf("Multiplicação (a * b): %d\n", a * b);
    printf("Divisão (a / b): %d\n", a / b);
    printf("Módulo (resto da divisão, a %% b): %d\n", a % b);

    // Operadores Relacionais (resultam em 1 para verdadeiro, 0 para falso)
    printf("\n--- Operadores Relacionais ---\n");
    printf("a > b: %d\n", a > b);   // Maior que
    printf("a < b: %d\n", a < b);   // Menor que
    printf("a == b: %d\n", a == b); // Igual a
    printf("a != b: %d\n", a != b); // Diferente de

    // Operadores Lógicos
    int x = 1; // Verdadeiro
    int y = 0; // Falso
    printf("\n--- Operadores Lógicos ---\n");
    printf("E Lógico (x && y): %d\n", x && y); // E (AND)
    printf("OU Lógico (x || y): %d\n", x || y); // OU (OR)
    printf("NÃO Lógico (!x): %d\n", !x);     // NÃO (NOT)

    return 0;
}
