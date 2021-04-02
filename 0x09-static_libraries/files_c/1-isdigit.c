#include "holberton.h"

/**
 * _isdigit - If is 0 to 9 return 1, if not return 0
 *
 * @c: this is the entry
 *
 * Return: 0
 *
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
