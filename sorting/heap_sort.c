static inline void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

static void _sift_down(int *array, int root, int end)
{
	int done, swap;

	done = 0;

	while((root * 2 + 1<= end) && (!done))
	{
		if(root * 2 + 1 == end)
			swap = root * 2 + 1;
		else if(array[root * 2 + 1] > array[root * 2 + 2])
			swap = root * 2 + 1;
		else
			swap = root * 2 + 2;

		if(array[root] < array[swap])
		{
			swap_int(&array[root], &array[swap]);
			root = swap;
		}
		else
			done = 1;
	}
}

void heap_sort(int *array, int len)
{
	int i;

	for(i = (len / 2) - 1; i >=0; i--)
		_sift_down(array, i, len - 1);

	for(i = len - 1; i >= 1; i--)
	{
		swap_int(&array[i], &array[0]);
		_sift_down(array, 0, i - 1);
	}
}
