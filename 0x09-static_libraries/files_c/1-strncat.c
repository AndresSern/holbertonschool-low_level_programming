#include "holberton.h"

/**
 * _strncat - THis is the main
 * @dest: This is the dest
 * @src: This is the src
 * @n: Thi is n
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (b < n)
	{
	dest[a] = '\0';
	}
	return (dest);
}
