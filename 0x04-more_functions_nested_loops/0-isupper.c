#include "holberton.h"

/**
 * _isupper - If is uppercase return 1, if not return 0
 *
 * @c: this is the entry
 *
 * Return: 0
 *
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
