#include "holberton.h"

/**
 * more_numbers - print numbers of 0 to 14 with putchar
 *
 *
 *
 *
 *
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{

			if (b >= 10 && b <= 14)
			{
				_putchar((b / 10) + '0');
			}
				_putchar((b % 10) + '0');
		}
	_putchar('\n');
	}
}
