#include "holberton.h"

/**
 * print_square - Function that prints a square, followed by a new line.
 *
 * @n: Entry
 *
 *
 */

void print_square(int n)
{
	int replay, count;

	if (n > 0)
	{
		for (replay = 1; replay <= n; replay++)
		{
			for (count = 1; count <= n; count++)
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
