#include "holberton.h"

/**
 * _memcpy - Write a function that copies memory area.
 * The _memcpy() function copies n bytes from memory area src to memory area
 * dest
 *
 * @dest: This is the output string
 * @src: This is my input string
 * @n: This is the number bytes to copy
 *
 * Return: This is the string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;
	char *pDst = dest;
	char const *pSrc =  src;

	for (count = 0; count < n; count++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}
