#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - This function inialiced with malloc
 * @size: This is the length of my array
 * @c: This is my char
 *
 * Return: This is  my array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size <= 0)
		return (NULL);
	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}

