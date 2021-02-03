#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print number from 0 to 9 without using char
*
* Return: 0 for success
*/
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	putchar('\n');
	return (0);
}
