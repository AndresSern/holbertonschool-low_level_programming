#include "holberton.h"

/**
 * factorial - This is the fuction that give me
 * @n: This is my entry
 *
 * Return: This is the my return
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
