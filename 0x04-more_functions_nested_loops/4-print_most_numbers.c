#include "holberton.h"

/**
 * print_most_numbers - numbers 0 to 9
 *
 *
 * Return: is zero
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
