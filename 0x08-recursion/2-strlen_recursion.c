#include "holberton.h"
/**
 * _strlen_recursion - This is like length
 * @s: This is my char of length
 *
 * Return: This is the result in length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
