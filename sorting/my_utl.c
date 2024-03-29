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

void my_utl_input_array(int *array, int n)
{
	int i;


	for(i=0; i<n; i++)
	{
		srandom(100 * i + 1);
		array[i] = random() % 65535;
	}
}

void my_utl_print_array(int *array, int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}

	putchar('\n');
}

int my_utl_array_sorted(int *array, int n)
{
	int i;
	int flag = 1;
	for(i=0; i<n-1; i++)
	{
		if(array[i] > array[i+1])
		{
			flag = 0;
		}
	}
	return flag;

}

int my_utl_sort_test(my_sort_func sort_func)
{
	int *arr = NULL;
	int n = random()%10;
	int ret = -1;

	assert(sort_func);

	arr = my_utl_new_array(n);

	my_utl_input_array(arr, n);

	sort_func(arr, n);

	if(my_utl_array_sorted(arr,n))
		ret = 0;

	my_utl_delete_array(arr);

	return ret;
}
