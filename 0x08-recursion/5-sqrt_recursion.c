#include "holberton.h"
/**
 * _sqrt_recursion - This is my first function
 * @n: This is my value
 *
 * Return: This is my result of the function another
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (another(n, 0));
}
/**
 * another - This is my another function about the square root
 * @a: The entry is equal to n, of the before function
 * @b: This is the sum
 *
 * Return: This is the result
 */
int another(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if (b >= a)
		return (-1);
	else
		return (another(a, b + 1));
}
