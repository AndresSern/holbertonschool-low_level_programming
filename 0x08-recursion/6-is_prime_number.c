#include "holberton.h"
/**
 * is_prime_number - Write a function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 *
 * @prime: Is my number prime
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
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
