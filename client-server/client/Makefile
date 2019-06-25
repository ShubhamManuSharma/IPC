CC=gcc
CFLAGS=-I.
DEPS=*.h
OBJ=rc1.o
LDFLAGS=-lpthread

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(LDFLAGS)

client: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PTHONY:clean

clean:
	rm -rf $(OBJ) client 
