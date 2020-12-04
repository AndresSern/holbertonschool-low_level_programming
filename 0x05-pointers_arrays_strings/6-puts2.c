#include "holberton.h"

/**
 * puts2 - This print every 2 casillas
 *
 * @s: THis is my entry
 *
 *
 */

void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
