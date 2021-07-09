#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print numbers from 00 to 99 without repeating
* Return: 0 for success
*/
int main(void)
{
	int digit;

	for (digit = 1; digit < 100; digit++)
	{
		int first, last, reversed;
		first = digit / 10;
		last = digit % 10;
		reversed = (last * 10) + first;
		if (digit < reversed)
		{
			putchar((digit / 10) + '0');
			putchar((digit % 10) + '0');

			if (digit != 89)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
return (0);
}
