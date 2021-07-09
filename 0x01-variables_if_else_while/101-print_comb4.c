#include <stdio.h>
/**
  * main - prints all possible different combinations of three digits
  *
  * Return: 0 if success
**/
int main(void)
{

	int count;

	for (count = 12; count < 1000; count++)
	{
		int number1, number2, number3;
		number1 = count / 100;
		number2 = (count / 10) % 10;
		number3 = x % 10;
		if (number3 > number2 && number2 > number1)
		{
			if (count > 12)
			{
				putchar (',');
				putchar (' ');
			}
			putchar (number1 + 48);
			putchar (number2 + 48);
			putchar (number3 + 48);
		}
	}
	putchar ('\n');
	return (0);
}
