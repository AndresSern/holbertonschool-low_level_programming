#include <stdio.h>
#include <stdint.h>

/**
 * main - Write a program that finds and prints the largest prime factor
 *
 * number 612852475143, followed by a new line.
 *
 * Return: 0
 *
 **/
int main(void)
{
	int newValue, count;
	long int number = 612852475143;

	for (count = 2; count <= number; count++)
	{
		if (number % count == 0)
		{
			number = number / count;
			newValue = count;
		}
	}
	printf("%d\n", newValue);
	return (0);
}
