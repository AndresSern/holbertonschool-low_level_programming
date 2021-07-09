#include "holberton.h"
/**
 * binary_to_uint - This funtion convert binary to decimal
 * @b: This is my string of entry
 * Return: This return to a digital number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int multiplicador = 1, index = 0;

	if (b == NULL)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = index - 1; index >= 0; index--)
	{
		char currentCharacter;

		currentCharacter = b[index];
		if (currentCharacter == '1')
		{
			decimal += multiplicador;
		}
		multiplicador = multiplicador * 2;
		if (index == 0)
			break;
	}
	return (decimal);
}
