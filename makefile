CC=gcc
AR=ar
FLAGS= -Wall -g


all:  main


# Rule to build the library 'libmy_mat.a'
libmy_mat.a: my_mat.o
	ar rcs libmy_mat.a my_mat.o

# Rule to compile main.c into an object file
main.o: my_graph.c my_mat.h 
	$(CC) $(FLAGS) -c my_graph.c

my_mat.o: my_mat.c my_mat.h 
	$(CC) $(FLAGS)  -c my_mat.c
    
# Rule to link the executable with the library
main: my_graph.o libmy_mat.a
	$(CC) $(FLAGS) my_graph.o -L. -lmy_mat -o main





.PHONY: clean all

clean: 
	rm -f *.o *.a *.so main main.o libmy_mat.a my_mat.o