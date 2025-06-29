// 03_input.c
// This program shows how to read input from the user.

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");

    // `scanf` is used to read formatted input from the keyboard.
    // The `&` before `numero` is the "address-of" operator.
    // It tells `scanf` where in memory to store the value it reads.
    scanf("%d", &numero);

    printf("Você digitou o número: %d\n", numero);

    return 0;
}