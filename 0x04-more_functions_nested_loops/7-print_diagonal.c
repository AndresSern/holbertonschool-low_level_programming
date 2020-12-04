#include "holberton.h"

/**
 * print_diagonal - finished with a slac
 *
 * @n: this is the entry
 *
 * Return: There is no error
 **/

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (b == a)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
