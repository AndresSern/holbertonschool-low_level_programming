#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - This is my funcion
 * @s: This my string of char
 * @c: This is my character
 * Return: This is my resulti
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
