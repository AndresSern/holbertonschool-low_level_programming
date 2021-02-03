#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print numbers '00' to '99' separeted by a comma
*
* Return: 0 for success
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 100; digit++)
	{
		putchar((digit / 10) + '0');
		putchar((digit % 10) + '0');
		if (digit != 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
