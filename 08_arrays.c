// 08_arrays.c
// Trabalhando com arrays (listas de dados do mesmo tipo).

#include <stdio.h>

int main() {
    // Declarando um array de 5 inteiros
    // Os índices do array em C vão de 0 a (tamanho - 1)
    int notas[5];

    // Atribuindo valores aos elementos do array
    notas[0] = 10;
    notas[1] = 8;
    notas[2] = 9;
    notas[3] = 7;
    notas[4] = 5;

    printf("A terceira nota é: %d\n\n", notas[2]); // Acessando o elemento de índice 2

    // Percorrendo o array com um laço `for` para imprimir todos os valores
    printf("Todas as notas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: %d\n", i + 1, notas[i]);
    }

    return 0;
}
