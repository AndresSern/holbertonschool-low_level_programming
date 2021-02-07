nclude <stdio.h>
#include <stdlib.h>

/**
 * main - Prints coints left
 * @args: Paramater Entry
 * @argv: One number of argumets
 * Return: zero onOne number of argumetsr
 */

int main(int args, char *argv[])
{
	int  c, coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; c >= 0;)
	{
		if (c >= 25)
			c -= 25;

		else if (c >= 10)
			c -= 10;

		else if (c >= 5)
			c -= 5;

		else if (c >= 2)
			c -= 2;

		else if (c >= 1)
			c -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
