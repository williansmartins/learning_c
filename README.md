# 🚀 Jornada de Aprendizado em C

Este repositório documenta minha jornada de aprendizado da linguagem de programação C. Ele contém uma série de programas simples, cada um focado em um conceito fundamental da linguagem.

## 📚 Conceitos Abordados

Os programas estão organizados em ordem crescente de complexidade:

- **01_hello_world.c**: A estrutura básica de um programa em C e a função `printf`.
- **02_variables.c**: Declaração, atribuição e uso de variáveis de diferentes tipos de dados.
- **03_input.c**: Leitura de dados inseridos pelo usuário com `scanf`.
- **04_operators.c**: Uso de operadores aritméticos, relacionais e lógicos.
- **05_conditionals.c**: Controle de fluxo com as estruturas `if`, `else if` e `else`.
- **06_loops.c**: Repetição de código com os laços `for` e `while`.
- **07_functions.c**: Criação e uso de funções para modularizar o código.
- **08_arrays.c**: Armazenamento e manipulação de coleções de dados com arrays.
- **09_pointers.c**: Introdução a ponteiros, endereços de memória e dereferência.
- **10_structs.c**: Definição de tipos de dados customizados com `struct`.
- **11_files.c**: Operações básicas de leitura e escrita em arquivos de texto.

## 🛠️ Como Usar

### Pré-requisitos

Para compilar e executar estes programas, você precisará de:
- Um compilador C (como `gcc` ou `clang`)
- A ferramenta `make`

### Compilação

Graças ao `Makefile` incluído, você pode compilar todos os programas de uma só vez. Navegue até o diretório raiz do projeto e execute:

```bash
make
```

Isso irá gerar um executável para cada arquivo `.c`.

### Executando um Programa

Após a compilação, você pode executar qualquer um dos programas da seguinte forma:

```bash
# Exemplo executando o primeiro programa
./01_hello_world

# Exemplo executando o programa de condicionais
./05_conditionals
```

### Limpeza

Para remover todos os arquivos executáveis gerados e limpar o diretório, execute:

```bash
make clean
```
