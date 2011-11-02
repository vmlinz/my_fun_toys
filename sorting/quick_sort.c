#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parttion(int *arr, int low, int high)
{
	int pvtkey = arr[low];

	while(low < high)
	{
		while((low < high) && (pvtkey <= arr[high]))
		{
			--high;
		}
		arr[low] = arr[high];

		while((low < high) && (pvtkey >= arr[low]))
		{
			++low;
		}
		arr[high] = arr[low];
	}

	arr[low] = pvtkey;

	return low;
}

void quick_sort(int *array, int low, int high)
{
	int pvtkey;

	if(low < high)
	{
		pvtkey = parttion(array, low, high);
		quick_sort(array, low, pvtkey - 1);
		quick_sort(array, pvtkey + 1, high);
	}

}