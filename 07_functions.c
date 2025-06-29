// 07_functions.c
// Como criar e usar suas próprias funções para organizar o código.

#include <stdio.h>

// Declaração da função (protótipo)
// Informa ao compilador que a função `soma` existe.
int soma(int a, int b);

// A função `main` vem primeiro
int main() {
    int num1 = 10;
    int num2 = 20;

    // Chamando a função `soma` e armazenando o resultado
    int resultado = soma(num1, num2);

    printf("A soma de %d e %d é %d\n", num1, num2, resultado);

    return 0;
}

// Definição da função
// Aqui está o código que a função executa.
int soma(int a, int b) {
    // A palavra-chave `return` envia o valor de volta para quem chamou a função.
    return a + b;
}

