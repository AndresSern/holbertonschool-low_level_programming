#include <stdio.h>

/**
 * print_array - This show the information about arrays
 * @a: This is the entry array
 * @n: This is the entry lenght of the array
 *
 *
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}

