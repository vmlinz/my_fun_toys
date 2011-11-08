#include <stdio.h>

#include "bubble_sort.h"

void bubble_sort(int *array, int n)
{
	int i,j,flag,temp;

	for(i=0;i<n-1;i++)
	{
		flag = 1;

		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				flag=0;
			}
		}

		if(1==flag)
		{
			break;
		}
	}
}
