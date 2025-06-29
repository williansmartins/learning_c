// 02_variables.c
// Este programa demonstra como declarar e usar variáveis de diferentes tipos.

#include <stdio.h>

int main() {
    // Declarando variáveis
    int idade;             // Para números inteiros
    float altura;          // Para números de ponto flutuante (com casas decimais)
    char inicial;          // Para um único caractere

    // Atribuindo valores às variáveis
    idade = 25;
    altura = 1.75;
    inicial = 'J';

    // Imprimindo os valores das variáveis
    // `%d` é um especificador de formato para inteiros.
    // `%f` é para floats.
    // `%c` é para chars.
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura); // `%.2f` limita a 2 casas decimais
    printf("Inicial do nome: %c\n", inicial);

    return 0;
}
