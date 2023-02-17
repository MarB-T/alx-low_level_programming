#include <stdio.h>

/**
 * main - Print all two non-similar digit combinations in order.
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 0;
	int y = 1;

	for (x = 0; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			if ((x == y) || (x > y))
			{
			}
			else
			{
				putchar(x + '0');
				putchar(y + '0');
				if ((x == 8) && (y == 9))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
