#include "holberton.h"
/**
 * string_toupper - This is the funcion
 * @hi: This is my entry
 *
 * Return: This is the result
 */


char *string_toupper(char *hi)
{
	int i = 0;
	int desp = 'a' - 'A';

	for (i = 0; hi[i] != '\0'; ++i)
	{
		if (hi[i] >= 'a' && hi[i] <= 'z')
		{
			hi[i] = hi[i] - desp;
		}
	}
	return (hi);
}
