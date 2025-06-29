// 09_pointers.c
// Uma introdução aos ponteiros.

#include <stdio.h>

int main() {
    int numero = 42;

    // Um ponteiro é uma variável que armazena o endereço de memória de outra variável.
    // `ptr_numero` é um ponteiro para um inteiro (`int *`).
    int *ptr_numero;

    // O operador `&` retorna o endereço de memória de uma variável.
    // Estamos atribuindo o endereço de `numero` para `ptr_numero`.
    ptr_numero = &numero;

    printf("Valor da variável `numero`: %d\n", numero);
    printf("Endereço de memória de `numero`: %p\n", &numero);
    printf("Valor do ponteiro `ptr_numero` (o endereço que ele armazena): %p\n", ptr_numero);

    // O operador `*` (dereferência) acessa o valor no endereço de memória que o ponteiro aponta.
    printf("Valor apontado por `ptr_numero`: %d\n\n", *ptr_numero);

    // Modificando o valor da variável original através do ponteiro
    *ptr_numero = 100;
    printf("Novo valor da variável `numero` (modificado via ponteiro): %d\n", numero);

    return 0;
}
