#include <stdio.h>

/**
 * main - Print all two non-similar digit combinations in order.
 * Return: 0 (Success)
 */

int main(void)
{
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				for (w = 0; w <= 9; w++)
				{
					if (((x + y) == (z + w)) || ((x == z) && (y == w)))
					{
					}
					else
					{
						putchar(x + '0');
						putchar(y + '0');
						putchar(' ');
						putchar(z + '0');
						putchar(w + '0');
							/*
							 * if ((x == 7) && (y == 8) && (z == 9))
							 * {
							 *	break;
							 * }
							*/
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
