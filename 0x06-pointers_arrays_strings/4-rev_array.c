#include "holberton.h"

/**
 * reverse_array - Enter the one array and the print reverse
 * @a: This is my array
 * @n: This is the number of bytes
 *
 */
void reverse_array(int *a, int n)
{
	int start, end, i, last;

	last = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		start = a[i];
		end = a[last];
		a[i] = end;
		a[last] = start;
		last--;
	}
}

