// 08_arrays.c
// Working with arrays (lists of data of the same type).

#include <stdio.h>

int main() {
    // Declaring an array of 5 integers
    // Array indices in C go from 0 to (size - 1)
    int notas[5];

    // Assigning values to the array elements
    notas[0] = 10;
    notas[1] = 8;
    notas[2] = 9;
    notas[3] = 7;
    notas[4] = 5;

    printf("The third grade is: %d\n\n", notas[2]); // Accessing the element at index 2

    // Looping through the array with a `for` loop to print all values
    printf("All grades:\n");
    for (int i = 0; i < 5; i++) {
        printf("Grade %d: %d\n", i + 1, notas[i]);
    }

    return 0;
}