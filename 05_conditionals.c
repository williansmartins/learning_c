// 05_conditionals.c
// Using if, else if, and else to control the program flow.

#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Você é menor de idade.\n");
    } else if (idade >= 18 && idade < 65) {
        printf("Você é um adulto.\n");
    } else {
        printf("Você é um idoso.\n");
    }

    return 0;
}