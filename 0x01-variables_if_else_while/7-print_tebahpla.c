#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print alphabet backwards
*
* Return: 0 for success
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
