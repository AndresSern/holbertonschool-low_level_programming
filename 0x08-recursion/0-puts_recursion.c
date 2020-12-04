#include "holberton.h"
/**
 * _puts_recursion - This is my main and print character by character
 * @s: This is my string
 *
 * Return: Nothing
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
