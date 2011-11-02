#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "my_utl.h"

int *my_utl_new_array(int n)
{
	int *ptr = NULL;

	ptr = malloc(n * sizeof(int));
	assert(ptr);

	return ptr;
}

void my_utl_delete_array(int *array)
{
	if(array)
		free(array);
}

void my_utl_input(int *array, int n)
{
	int i;

	for(i=0; i<n; i++)
	{
		scanf("%d", (array+i));
	}
}

void my_utl_print(int *array, int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}

	putchar('\n');
}

int my_utl_array_sorted(int *array, int n)
{
}
