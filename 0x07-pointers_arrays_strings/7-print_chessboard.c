#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - This is my funcion
 * @a: This is my variable
 *
 * Return: This is my return
 *
 */

void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
	}
}
