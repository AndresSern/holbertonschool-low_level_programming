#include "holberton.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: This is my entry
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
