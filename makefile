CC=gcc
AR=ar
FLAGS= -Wall -g


all:  my_graph my_Knapsack


# Rule to build the library 'libmy_mat.a'
libmy_mat.a: my_mat.o
	ar rcs libmy_mat.a my_mat.o

# Rule to compile my_graph.c into an object file
my_graph.o: my_graph.c my_mat.h 
	$(CC) $(FLAGS) -c my_graph.c -fPIC

my_Knapsack.o: my_Knapsack.c
	$(CC) $(FLAGS) -c my_Knapsack.c -fPIC

my_mat.o: my_mat.c my_mat.h 
	$(CC) $(FLAGS)  -c my_mat.c -fPIC
    
# Rule to link the executable with the library
my_graph: my_graph.o libmy_mat.a
	$(CC) $(FLAGS) my_graph.o -L. -lmy_mat -o my_graph

my_Knapsack: my_Knapsack.o libmy_mat.a
	$(CC) $(FLAGS) my_Knapsack.o -L. -lmy_mat -o my_Knapsack


.PHONY: clean all

clean: 
	rm -f *.o *.a *.so my_graph my_Knapsack 