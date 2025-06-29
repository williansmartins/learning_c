// 09_pointers.c
// An introduction to pointers.

#include <stdio.h>

int main() {
    int numero = 42;

    // A pointer is a variable that stores the memory address of another variable.
    // `ptr_numero` is a pointer to an integer (`int *`).
    int *ptr_numero;

    // The `&` operator returns the memory address of a variable.
    // We are assigning the address of `numero` to `ptr_numero`.
    ptr_numero = &numero;

    printf("Value of the `numero` variable: %d\n", numero);
    printf("Memory address of `numero`: %p\n", &numero);
    printf("Value of the `ptr_numero` pointer (the address it stores): %p\n", ptr_numero);

    // The `*` (dereference) operator accesses the value at the memory address the pointer points to.
    printf("Value pointed to by `ptr_numero`: %d\n\n", *ptr_numero);

    // Modifying the original variable's value through the pointer
    *ptr_numero = 100;
    printf("New value of the `numero` variable (modified via pointer): %d\n", numero);

    return 0;
}