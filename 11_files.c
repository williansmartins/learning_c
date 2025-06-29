// 11_files.c
// How to read from and write to text files.

#include <stdio.h>

int main() {
    // File pointer
    FILE *arquivo;

    // --- Writing to a File ---

    // `fopen` opens a file. "w" means write mode.
    // If the file doesn't exist, it will be created. If it exists, its content will be erased.
    arquivo = fopen("exemplo.txt", "w");

    // Always check if the file was opened successfully
    if (arquivo == NULL) {
        printf("Error opening the file for writing!\n");
        return 1; // Return an error code
    }

    // `fprintf` works like `printf`, but writes to a file.
    fprintf(arquivo, "Hello, file!\n");
    fprintf(arquivo, "This is a test of writing in C.\n");
    fprintf(arquivo, "Number: %d\n", 123);

    // `fclose` closes the file, saving the changes.
    fclose(arquivo);

    printf("File 'exemplo.txt' written successfully.\n\n");

    // --- Reading from a File ---

    // Open the same file in read mode ("r")
    arquivo = fopen("exemplo.txt", "r");

    if (arquivo == NULL) {
        printf("Error opening the file for reading!\n");
        return 1;
    }

    printf("Reading the file content:\n");
    char linha[100]; // Buffer to store each line read

    // `fgets` reads a line from the file until it finds a newline or the end of the file (EOF).
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        // Print the line that was read
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}