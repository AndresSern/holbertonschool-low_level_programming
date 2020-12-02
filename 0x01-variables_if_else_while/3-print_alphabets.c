#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Letter from "a" to "z" and "z" to "a"
* Return: 0 for success
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
