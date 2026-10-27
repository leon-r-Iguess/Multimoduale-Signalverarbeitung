CC     = gcc
CFLAGS = -Wall -Wextra -g
LDLIBS = -lm

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

main: $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@ $(LDLIBS)

%.o: %.c functions.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f main *.o

.PHONY: clean
