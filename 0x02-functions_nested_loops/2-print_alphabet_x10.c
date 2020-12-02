#include "holberton.h"

/**
 * print_alphabet_x10 - This function print alphabet x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9 ; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
