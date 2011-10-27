#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "merge_sort.h"

void merge(int *array, int p, int q, int r);

void merge_sort(int *array, int first, int last)
{
	int mid = 0;
	if(first < last)
	{
		mid = (first+last)/2 - 1;
		merge_sort(array, first, mid);
		merge_sort(array, mid+1,last);
		merge(array,first,mid,last);
	}
}

void merge(int *array, int p, int q, int r)
{
	int i,k;
	int begin1,end1,begin2,end2;
	int* temp = (int*)malloc((r-p+1)*sizeof(int));

	begin1= p;
	end1 = q;
	begin2 = q+1;
	end2 = r;
	k = 0;

	/* 1. Sort the two halves and put them into temp[] */
	while((begin1 <= end1)&&( begin2 <= end2))
	{
		if(array[begin1] < array[begin2])
		{
			temp[k] = array[begin1];
			begin1++;
		}
		else
		{
			temp[k] = array[begin2];
			begin2++;
		}
		k++;
	}

	if(begin1<=end1)
	{
		memcpy(temp+k, array+begin1, (end1 - begin1 + 1) * sizeof(int));
	}

	if(begin2<=end2)
	{
		memcpy(temp+k, array+begin2, (end2 - begin2 + 1) * sizeof(int));
	}

	/* 2. Copy sorted array to array */
	memcpy(array, temp, (r - p + 1) * sizeof(int));

	free(temp);
}
