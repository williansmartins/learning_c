// 06_loops.c
// Using `for` and `while` loops to execute code repeatedly.

#include <stdio.h>

int main() {
    // `for` loop
    // Used when you know the number of times you want to repeat.
    printf("Counting with the for loop:\n");
    // Initialization: `int i = 1`
    // Condition: `i <= 5` (continues as long as this is true)
    // Increment: `i++` (executes at the end of each iteration)
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // `while` loop
    // Used when the stopping condition depends on something that changes inside the loop.
    printf("Counting with the while loop:\n");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++; // Don't forget to increment the counter!
    }
    printf("\n");

    return 0;
}