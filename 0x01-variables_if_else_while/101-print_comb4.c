#include <stdio.h>

/**
 * main - Print all two non-similar digit combinations in order.
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 0;
	int y = 1;
	int z = 2;

	for (x = 0; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			for (z = 2; z <= 9; z++)
			{
				if ((x == y) || (x > y) || (y == z) || (y > z))
				{
				}
				else
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if ((x == 7) && (y == 8) && (z == 9))
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
