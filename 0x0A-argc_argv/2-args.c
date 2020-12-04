#include <stdio.h>

/**
 * main - This is my funcion and show word by word
 * @argc: This is my entry
 * @argv: This is my another entry
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
