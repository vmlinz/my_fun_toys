#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "my_utl.h"
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "selection_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"

int bubble_sort_test(void)
{
	int *brr = NULL;
	int n = 5;

//	printf("%s:\n", __func__);
	brr = my_utl_new_array(n);

	printf("Please input %d %s\n", n, n > 1 ? "integer" : "integers");

	my_utl_input(brr, n);
	my_utl_print(brr, n);

	bubble_sort(brr, n);
	my_utl_print(brr,n);

	my_utl_delete_array(brr);

	return 0;
}

int insertion_sort_test(void)
{
	int *arr = NULL;
	int n = 5;

//	printf("%s:\n", __func__);
	arr = my_utl_new_array(n);

	printf("Please Input an array of %d integers\n", n);

	my_utl_input(arr, n);
	my_utl_print(arr, n);

	insertion_sort(arr, 0, n);
	my_utl_print(arr,n);

	my_utl_delete_array(arr);

	return 0;
}

int selection_sort_test(void)
{
	int *arr = NULL;
	int n = 5;

//	printf("%s:\n", __func__);
	arr = my_utl_new_array(n);

	printf("Please Input an array of %d integers\n", n);

	my_utl_input(arr, n);
	my_utl_print(arr, n);

	selection_sort(arr, n);
	my_utl_print(arr,n);

	my_utl_delete_array(arr);

	return 0;
}

int merge_sort_test(void)
{
	int *arr = NULL;
	int n = 5;

//	printf("%s:\n", __func__);
	arr = my_utl_new_array(n);

	printf("Please Input an array of %d integers\n", n);

	my_utl_input(arr, n);
	my_utl_print(arr, n);

	merge_sort(arr, 0, n-1);
	my_utl_print(arr,n);

	my_utl_delete_array(arr);

	return 0;
}

int quick_sort_test(void)
{
	int *arr = NULL;
	int n = 5;

//	printf("%s:\n", __func__);
	arr = my_utl_new_array(n);

	printf("Please Input an array of %d integers\n", n);

	my_utl_input(arr, n);
	my_utl_print(arr, n);

	quick_sort(arr, 0, n-1);
	my_utl_print(arr,n);

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

	return 0;
}
