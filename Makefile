GCC = gcc
CFLAGS = -Wall -g

main: main.c
	$(GCC) $(CFLAGS) -o main main.c
clean:
	rm main
