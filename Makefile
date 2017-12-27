all: hello

run: hello
	@./hello

clean: hello
	@rm hello main.o

hello: main.o
	@gcc -o hello main.o

main.o: main.c
	@gcc -o main.o -c main.c -W -Wall