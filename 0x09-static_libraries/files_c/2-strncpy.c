#include "holberton.h"
/**
 * _strncpy - This is my main
 * @dest: This is my dest
 * @src: This is my source
 * @n: This is my N
 *
 *Return: THis is my return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0' ; b++)
	{
	dest[b] = src[b];
	}
	for (; b  < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
