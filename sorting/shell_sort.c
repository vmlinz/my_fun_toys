void shell_sort(int *a, int l)
{
	int i, j, k, h;
	int v;

	int incs[8] = {701, 301, 132, 57, 23, 10, 4, 1};

	for( k = 0; k < 8; k++)
		for(h = incs[k], i = h; i < l; i++)
		{
			v = a[i];
			j = i;

			while(j >= h && a[j - h] > v)
			{
				a[j] = a[j-h];
				j -= h;
			}

			a[j] = v;
		}
}
