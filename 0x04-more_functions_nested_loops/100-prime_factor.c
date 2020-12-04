#include <stdio.h>
#include <stdint.h>

/**
 * main - Prints the prime number of
 *
 *
 * Return: 0
 *
 **/
int main(void)
{
	int newValue, i;

	long int number = 612852475143;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			newValue = i;
		}
	}
	printf("%d\n", newValue);
	return (0);
}
