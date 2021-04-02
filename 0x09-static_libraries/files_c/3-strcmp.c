#include "holberton.h"
/**
 * _strcmp - This is my function
 * @s1: This is my entry
 * @s2: This is my entry again
 * Return: This is my result
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && *s1 == *s2; s1++, s2++)
	{
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
