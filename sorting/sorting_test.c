#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "my_utl.h"
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "selection_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "heap_sort.h"

int bubble_sort_test(void)
{
	int *arr = NULL;
	int n = rand()%10;

	arr = my_utl_new_array(n);
	printf("bubble_sort_test:");

	my_utl_input_array(arr, n);
	bubble_sort(arr, n);

	if(my_utl_array_sorted(arr,n))
		printf("ok\n");
	else
		printf("failed\n");

	my_utl_delete_array(arr);

	return 0;
}

int insertion_sort_test(void)
{
	int *arr = NULL;
	int n = rand()%10;

	arr = my_utl_new_array(n);
	printf("insertion_sort_test:");

	my_utl_input_array(arr, n);
	insertion_sort(arr, 0, n);

	if(my_utl_array_sorted(arr,n))
		printf("ok\n");
	else
		printf("failed\n");

	my_utl_delete_array(arr);

	return 0;
}

int selection_sort_test(void)
{
	int *arr = NULL;
	int n = rand()%10;

	arr = my_utl_new_array(n);
	printf("selection_sort_test:");

	my_utl_input_array(arr, n);
	selection_sort(arr, n);

	if(my_utl_array_sorted(arr,n))
		printf("ok\n");
	else
		printf("failed\n");

	my_utl_delete_array(arr);

	return 0;
}

int merge_sort_test(void)
{
	int *arr = NULL;
	int n = rand()%10;

	arr = my_utl_new_array(n);
	printf("merge_sort_test:");

	my_utl_input_array(arr, n);
	merge_sort(arr, 0, n-1);

	if(my_utl_array_sorted(arr,n))
		printf("ok\n");
	else
		printf("failed\n");

	my_utl_delete_array(arr);

	return 0;
}

int quick_sort_test(void)
{
	int *arr = NULL;
	int n = rand()%10;

	arr = my_utl_new_array(n);
	printf("quick_sort_test:");

	my_utl_input_array(arr, n);
	quick_sort(arr, 0, n-1);

	if(my_utl_array_sorted(arr,n))
		printf("ok\n");
	else
		printf("failed\n");

	my_utl_delete_array(arr);

	return 0;
}

int heap_sort_test(void)
{
	int *arr = NULL;
	int n = rand()%10;

	arr = my_utl_new_array(n);
	printf("heap_sort_test:");

	my_utl_input_array(arr, n);
	heap_sort(arr, n);

	if(my_utl_array_sorted(arr,n))
		printf("ok\n");
	else
		printf("failed\n");

	my_utl_delete_array(arr);

	return 0;
}

int main(int argc, char *argv[])
{
	bubble_sort_test();
	insertion_sort_test();
	selection_sort_test();
	merge_sort_test();
	quick_sort_test();
	heap_sort_test();

	return 0;
}
