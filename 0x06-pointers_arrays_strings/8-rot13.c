#include "holberton.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @hi: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *hi)
{
	int index, count;

	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mayus[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; hi[index] != '\0'; ++index)
	{
		for (count = 0; minus[count] != '\0' ; count++)
		{
			if (hi[index] == minus[count])
			{
				hi[index] = mayus[count];
				break;
			}
		}
	}
	hi[index] = '\0';
	return (hi);
}
