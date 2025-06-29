// 10_structs.c
// How to group different data types into a single structure (struct).

#include <stdio.h>
#include <string.h> // To use the strcpy function

// Defining a structure to represent a Person
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    // Declaring a variable of type `struct Pessoa`
    struct Pessoa pessoa1;

    // Assigning values to the struct members
    // For strings (char arrays), we use `strcpy` from the <string.h> library
    strcpy(pessoa1.nome, "Carlos");
    pessoa1.idade = 30;
    pessoa1.altura = 1.80;

    // Accessing and printing the values
    printf("Dados da Pessoa 1:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n", pessoa1.altura);

    return 0;
}