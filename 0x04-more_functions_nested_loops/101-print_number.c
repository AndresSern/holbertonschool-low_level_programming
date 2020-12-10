#include "holberton.h"

/**
 * print_number - Write a function that prints an integer with putchar
 * @n: This is my number to print
 *
 */
void print_number(int n)
{
	unsigned int num2, num1 = n;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		num1 = n * -1;
	}
	num2 = num1;
	while (num2 > 9)
	{
		div *= 10;
		num2 = num2 / 10;
	}
	while (div >= 1)
	{
		num2 = num1 % div;
		num1 /= div;
		_putchar(num1 + '0');
		num1 = num2;
		div /= 10;
	}
}
