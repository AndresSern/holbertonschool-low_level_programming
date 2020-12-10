#include "holberton.h"
/**
 * _puts_recursion - Write a function that prints a string, followed by a new
 * line.
 *
 * @s: This is the input string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
