#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - This function copy to string to a pointer
 * @str: This is my string of enter
 * Return: This return a string
 */
char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	s = (char *)  malloc((a + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (b = 0; b < a ; b++)
		s[b] = str[b];

	a += 1;
	s[a] = '\0';
	return (s);
}
