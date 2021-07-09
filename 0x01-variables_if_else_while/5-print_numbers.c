#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print numbers from "0" to "9"
* Return: 0 for success
*/
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
