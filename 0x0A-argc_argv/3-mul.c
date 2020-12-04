#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is my funcion and show word by word
 * @argc: This is my entry
 * @argv: This is my another entry
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int a, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
	{
		multiplication = multiplication * atoi(argv[a]);
	}
	printf("%d\n", multiplication);
	return (0);
}

