EXEC = output/calculadora-cli

SRC = main.c funcoes.c

CC = gcc

CFLAGS = -Wall -std=c99

$(EXEC): $(SRC)
	mkdir -p output
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC) -lm

clean:
	rm -f $(EXEC)