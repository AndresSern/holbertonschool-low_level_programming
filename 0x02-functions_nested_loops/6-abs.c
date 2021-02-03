#include "holberton.h"

/**
 * _abs - This is a absolute value
 *
 * @a: This is the entry
 *
 * Return: Always 0.
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
