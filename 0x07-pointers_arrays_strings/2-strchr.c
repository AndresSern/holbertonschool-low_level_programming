#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - Function that locates a character in a string
 * @s: This is the input string
 * @c: This is the character
 * Return: Return to the character found, if not return a NULL
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
