// 03_input.c
// Este programa mostra como ler dados inseridos pelo usuário.

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");

    // `scanf` é usada para ler dados formatados do teclado.
    // O `&` antes de `numero` é o operador "endereço de".
    // Ele informa ao `scanf` onde na memória deve armazenar o valor lido.
    scanf("%d", &numero);

    printf("Você digitou o número: %d\n", numero);

    return 0;
}
