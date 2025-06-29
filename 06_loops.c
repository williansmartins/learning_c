// 06_loops.c
// Usando laços `for` e `while` para executar código repetidamente.

#include <stdio.h>

int main() {
    // Laço `for`
    // Usado quando você sabe o número de vezes que quer repetir.
    printf("Contagem com o laço for:\n");
    // Inicialização: `int i = 1`
    // Condição: `i <= 5` (continua enquanto for verdadeiro)
    // Incremento: `i++` (executa no final de cada iteração)
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Laço `while`
    // Usado quando a condição de parada depende de algo que muda dentro do laço.
    printf("Contagem com o laço while:\n");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++; // Não se esqueça de incrementar o contador!
    }
    printf("\n");

    return 0;
}
