#include <stdio.h>
/**
 * main - Entry point
 * Description: Calculates the sum of even fib numbers lower than 4,000,000
 * Return: Always Zero
 */
int main(void)
{
	long before, after, fibonnaci, sum;
	int count = 0;

	before = 1;
	after = 2;
	sum = 2;
	while (count <= 29)
	{
		fibonnaci = before + after;
		if ((fibonnaci % 2) == 0)
			sum += fibonnaci;
		before = after;
		after = fibonnaci;
		count++;
	}
	printf("%lu\n", sum);
	return (0);
}
