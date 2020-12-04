#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - This function gime the adress
 * @b: This is my size
 * Return: The adress
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
