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
#include "shell_sort.h"

void insertion_sort_wrapper(int *a, int n)
{
	insertion_sort(a, 0, n);
}

void merge_sort_wrapper(int *a, int n)
{
	merge_sort(a, 0, n - 1);
}

void quick_sort_wrapper(int *a, int n)
{
	quick_sort(a, 0, n - 1);
}

int bubble_sort_test(void)
{
	int ret = -1;

	printf("%s:", __func__);

	ret = my_utl_sort_test(bubble_sort);

	if(ret == 0)
		printf("ok\n");
	else
		printf("failed\n");

	return ret;
}

int insertion_sort_test(void)
{
	int ret = -1;

	printf("%s:", __func__);

	ret = my_utl_sort_test(insertion_sort_wrapper);

	if(ret == 0)
		printf("ok\n");
	else
		printf("failed\n");

	return ret;
}

int selection_sort_test(void)
{
	int ret = -1;

	printf("%s:", __func__);

	ret = my_utl_sort_test(selection_sort);

	if(ret == 0)
		printf("ok\n");
	else
		printf("failed\n");

	return ret;
}

int merge_sort_test(void)
{
	int ret = -1;

	printf("%s:", __func__);

	ret = my_utl_sort_test(merge_sort_wrapper);

	if(ret == 0)
		printf("ok\n");
	else
		printf("failed\n");

	return ret;
}

int quick_sort_test(void)
{
	int ret = -1;

	printf("%s:", __func__);

	ret = my_utl_sort_test(quick_sort_wrapper);

	if(ret == 0)
		printf("ok\n");
	else
		printf("failed\n");

	return ret;
}

int heap_sort_test(void)
{
	int ret = -1;

	printf("%s:", __func__);

	ret = my_utl_sort_test(heap_sort);

	if(ret == 0)
		printf("ok\n");
	else
		printf("failed\n");

	return ret;
}

int shell_sort_test(void)
{
	int ret = -1;

	printf("%s:", __func__);

	ret = my_utl_sort_test(shell_sort);

	if(ret == 0)
		printf("ok\n");
	else
		printf("failed\n");

	return ret;
}

int main(int argc, char *argv[])
{
	bubble_sort_test();
	insertion_sort_test();
	selection_sort_test();
	merge_sort_test();
	quick_sort_test();
	heap_sort_test();
	shell_sort_test();

	return 0;
}
