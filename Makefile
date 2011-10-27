CC = gcc
CC_FLAGS = -ggdb

all:
	$(CC) merge_sort.c selection_sort.c bubble_sort.c insertion_sort.c my_utl.c sorting_test.c -o sorting_test
