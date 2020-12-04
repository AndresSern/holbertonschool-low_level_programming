#include "holberton.h"

/**
 *_strcat - This is the main copy
 *@dest: This is my dest
 *@src: This is my source
 *
 * Return: This return to the result
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	dest[a] = src[b];
	a++;
	}
	return (dest);
}
