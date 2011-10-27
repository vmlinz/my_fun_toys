#include <stdio.h>

#include "selection_sort.h"

void selection_sort(int *arr, int n)
{
	int i,j;
	int temp;
	int regist;

	for(i = 0;  i < n - 1;  i++)
	{
		/* 1. find the index of minimum data */
		temp = i;
		for(j = i + 1;  j < n;  j++)
		{
			if(arr[temp] > arr[j])
			{
				temp = j;
			}
		}

		/* 2. swap minimum data to sorted list */
		if(i !=  temp)
		{
			regist=arr[i];
			arr[i]=arr[temp];
			arr[temp]=regist;
		}
	}
}
