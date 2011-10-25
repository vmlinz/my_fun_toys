#include <stdio.h>

#include "insertion_sort.h"

void insertion_sort(int *arr, int first, int last)
{
	int i,j;
	int temp;

	for(i = first + 1; i < last; i++)
	{
		temp = arr[i];
		for(j = i - 1; (j >= first) && (arr[j] > temp); j--)
		{
			arr[j + 1] = arr[j];
		}

		arr[j + 1] = temp;
	}
}
