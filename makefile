CC = gcc
CFLAGS = -Wall -g -DDEBUG
OBJ = main.o math.o pow.o logger.o
EXEC = calc

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

main.o: main.c math.h pow.h logger.h trace.h
	$(CC) $(CFLAGS) -c main.c

math.o: math.c math.h trace.h
	$(CC) $(CFLAGS) -c math.c

pow.o: pow.c pow.h trace.h
	$(CC) $(CFLAGS) -c pow.c

logger.o: logger.c logger.h
	$(CC) $(CFLAGS) -c logger.c

clean:
	rm -f *.o $(EXEC)
