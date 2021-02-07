#include <stdio.h>
/**
 * main - Write a program that prints all arguments it receives
 *        All arguments should be printed, including the first on
 *
 * @argc: This is the argument count 
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
