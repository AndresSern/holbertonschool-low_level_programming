 #include "holberton.h"

/**
 * puts2 - Write a function that prints every other character of a string, 
 *         starting with the first character, followed by a new line.
 *
 * @s: This pointer point to a char or string
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
