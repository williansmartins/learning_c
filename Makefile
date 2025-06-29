# Makefile para compilar múltiplos programas em C

# Define o compilador que será usado (gcc)
CC = gcc
# Define as flags de compilação. -Wall habilita todos os avisos, o que é uma boa prática.
CFLAGS = -Wall -g

# Encontra todos os arquivos com a extensão .c no diretório atual
SRCS = $(wildcard *.c)

# Gera os nomes dos arquivos executáveis a partir dos arquivos .c (ex: 01_hello_world.c -> 01_hello_world)
TARGETS = $(patsubst %.c, %, $(SRCS))

# A regra 'all' é a regra padrão. Será executada quando você rodar 'make'.
# Ela depende de todos os nossos alvos (os executáveis).
all: $(TARGETS)

# Esta é uma regra de padrão. Ela ensina ao 'make' como criar um executável a partir de um arquivo .c
# $@ é o nome do alvo (ex: 01_hello_world)
# $< é o nome da primeira dependência (ex: 01_hello_world.c)
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# A regra 'clean' remove todos os arquivos compilados para limpar o diretório.
clean:
	rm -f $(TARGETS) exemplo.txt

# Declara que 'all' e 'clean' não são nomes de arquivos reais.
.PHONY: all clean
