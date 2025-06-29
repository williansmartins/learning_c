// 01_hello_world.c
// The most basic C program. It prints "Olá, Mundo!" to the screen.

// The `printf` function is part of the standard input/output library,
// so we need to include the header that defines it.
#include <stdio.h>

// The `main` function is the entry point of every C program.
// The operating system calls this function when the program is run.
int main() {
    // `printf` is used to print formatted text to the screen.
    // The `\n` sequence represents a newline character.
    printf("Olá, Mundo!\n");

    // The `main` function returns an integer.
    // Returning 0 indicates that the program executed successfully.
    return 0;
}