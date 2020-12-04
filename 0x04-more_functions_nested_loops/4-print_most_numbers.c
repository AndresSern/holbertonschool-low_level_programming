#include "holberton.h"

/**
 * print_most_numbers - Prints numbers "0" to "9", except 2 and 4
 *
 *
 * Return: is zero
 */
void print_most_numbers(void)
{
	char digits;

	for (digits = '0'; digits <= '9'; digits++)
	{
		if (digits != '9' && digits != '4')
		{
			_putchar(digits);
		}
	}
	_putchar('\n');
}
