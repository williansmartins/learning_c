# 🚀 C Learning Journey

This repository documents my learning journey with the C programming language. It contains a series of simple programs, each focusing on a fundamental concept of the language.

## 📚 Concepts Covered

The programs are organized in increasing order of complexity:

- **01_hello_world.c**: The basic structure of a C program and the `printf` function.
- **02_variables.c**: Declaration, assignment, and use of variables of different data types.
- **03_input.c**: Reading user input with `scanf`.
- **04_operators.c**: Using arithmetic, relational, and logical operators.
- **05_conditionals.c**: Flow control with `if`, `else if`, and `else` statements.
- **06_loops.c**: Code repetition with `for` and `while` loops.
- **07_functions.c**: Creating and using functions to modularize code.
- **08_arrays.c**: Storing and manipulating data collections with arrays.
- **09_pointers.c**: Introduction to pointers, memory addresses, and dereferencing.
- **10_structs.c**: Defining custom data types with `struct`.
- **11_files.c**: Basic read and write operations on text files.

## 🛠️ How to Use

### Prerequisites

To compile and run these programs, you will need:
- A C compiler (like `gcc` or `clang`)
- The `make` tool

### Compilation

Thanks to the included `Makefile`, you can compile all the programs at once. Navigate to the project's root directory and run:

```bash
make
```

This will generate an executable for each `.c` file.

### Running a Program

After compilation, you can run any of the programs as follows:

```bash
# Example running the first program
./01_hello_world

# Example running the conditionals program
./05_conditionals
```

### Cleanup

To remove all generated executable files and clean up the directory, run:

```bash
make clean
```