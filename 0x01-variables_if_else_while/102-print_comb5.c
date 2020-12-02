#include <stdio.h>
/**
  * main - prints all possible different combinations of two two digit numbers
  *
  * Return: 0 if success
**/
int main(void)
{
	int count, y, number_first, number_last, y1, y2;

	for (count = 0; count < 100; count++)
	{
		for (y = 0; y < 100; y++)
		{
			number_first = count / 10;
			number_last = count % 10;
			y1 = y / 10;
			y2 = y % 10;
			if (y > count && count != y)
			{
				if (y > 1)
				{
					putchar (',');
					putchar (' ');
				}
				putchar (number_first + 48);
				putchar (number_last + 48);
				putchar (' ');
				putchar (y1 + 48);
				putchar (y2 + 48);
			}
		}
	}
	putchar ('\n');
	return (0);
}
