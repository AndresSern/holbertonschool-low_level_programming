#include "holberton.h"
/**
 * is_prime_number - This is my function and return 1 if is prime
 * @prime: Is my number prime
 *
 * Return: This is my return
 */

int is_prime_number(int prime)
{
	if (prime <= 1)
		return (0);
	if (prime == 2)
		return (1);
	if ((prime % 2 == 0) || (prime % 3 == 0) || (prime % 5 == 0))
		return (0);
	else if (prime % 9 == 0 || prime % 7 == 0)
		return (0);
	else
		return (1);
}
