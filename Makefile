CC= gcc
CFLAGS= -Wall -pedantic -g
RM= rm -rf

all: sim

sim: access.o cache.o memory.o main.c
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) *.o
	$(RM) sim
