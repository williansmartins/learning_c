// 01_hello_world.c
// O programa mais básico em C. Ele imprime "Olá, Mundo!" na tela.

// A função `printf` faz parte da biblioteca de entrada/saída padrão,
// então precisamos incluir o cabeçalho que a define.
#include <stdio.h>

// A função `main` é o ponto de entrada de todo programa em C.
// O sistema operacional chama esta função quando o programa é executado.
int main() {
    // `printf` é usada para imprimir texto formatado na tela.
    // A sequência `\n` representa um caractere de nova linha.
    printf("Olá, Mundo!\n");

    // A função `main` retorna um inteiro.
    // Retornar 0 indica que o programa foi executado com sucesso.
    return 0;
}
