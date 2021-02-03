#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print numbers 0 to 9 separated by a comma
*
* Return: 0 for success
*/
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
