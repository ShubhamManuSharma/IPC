CC=gcc
CFLAGS=-I.
DEPS=*.h
OBJ=server.o
LDFLAGS=-lpthread

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(LDFLAGS)

server: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PTHONY:clean

clean:
	rm -rf $(OBJ) server 
