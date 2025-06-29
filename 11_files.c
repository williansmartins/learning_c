// 11_files.c
// Como ler e escrever em arquivos de texto.

#include <stdio.h>

int main() {
    // Ponteiro de arquivo
    FILE *arquivo;

    // --- Escrita em Arquivo ---

    // `fopen` abre um arquivo. "w" significa modo de escrita (write).
    // Se o arquivo não existir, ele será criado. Se existir, seu conteúdo será apagado.
    arquivo = fopen("exemplo.txt", "w");

    // Sempre verifique se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita!\n");
        return 1; // Retorna um código de erro
    }

    // `fprintf` funciona como `printf`, mas escreve em um arquivo.
    fprintf(arquivo, "Olá, arquivo!\n");
    fprintf(arquivo, "Este é um teste de escrita em C.\n");
    fprintf(arquivo, "Número: %d\n", 123);

    // `fclose` fecha o arquivo, salvando as alterações.
    fclose(arquivo);

    printf("Arquivo 'exemplo.txt' escrito com sucesso.\n\n");

    // --- Leitura de Arquivo ---

    // Abre o mesmo arquivo em modo de leitura ("r" para read)
    arquivo = fopen("exemplo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    printf("Lendo o conteúdo do arquivo:\n");
    char linha[100]; // Buffer para armazenar cada linha lida

    // `fgets` lê uma linha do arquivo até encontrar uma nova linha ou o fim do arquivo (EOF).
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        // Imprime a linha que foi lida
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}
