#include "holberton.h"

/**
 * print_line -  print lines with your numbers
 *
 * @n: this is the entry
 *
 *
 */

void print_line(int n)
{
	int a;

	if (n >= 1)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
