#include "holberton.h"

/**
 * print_square - tabla con el #
 *
 * @n: Entry
 *
 *
 */

void print_square(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
