#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet x10, in lowercase followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int count;
	char letter;

	for (count = 0; count <= 9 ; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
