// 10_structs.c
// Como agrupar diferentes tipos de dados em uma única estrutura (struct).

#include <stdio.h>
#include <string.h> // Para usar a função strcpy

// Definindo uma estrutura para representar uma Pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    // Declarando uma variável do tipo `struct Pessoa`
    struct Pessoa pessoa1;

    // Atribuindo valores aos membros da struct
    // Para strings (arrays de char), usamos `strcpy` da biblioteca <string.h>
    strcpy(pessoa1.nome, "Carlos");
    pessoa1.idade = 30;
    pessoa1.altura = 1.80;

    // Acessando e imprimindo os valores
    printf("Dados da Pessoa 1:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n", pessoa1.altura);

    return 0;
}
