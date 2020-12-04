#include <stdio.h>
/**
 * main - This function print la cantidad de args
 * @args: This entry is the value
 * @argv: This is the array of args
 * Return: This return to 0
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	argv--;
	return (0);
}
