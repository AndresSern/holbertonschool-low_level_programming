#include "holberton.h"
/**
 * _pow_recursion - This is my function
 *
 * @x: This is my variable to exponotiation
 * @y: This is my repetative
 *
 * Return: This is the return
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
