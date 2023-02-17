#include <stdio.h>

/**
 * main - Print all two non-similar digit combinations in order.
 * Return: 0 (Success)
 */

int main(void)
{
	int w;
	int x = 0;
	int y = 0;
	int z = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (y > 1)
				{
					w = y + 1;
				}
				for (w = 0; w <= 9; w++)
				{
					if (((x == z) && (y == w)) || ((z == 0) && (w == 0)) ||((x + y) > (w + z)))
					{
					}
					else
					{
						putchar(x + '0');
						putchar(y + '0');
						putchar(' ');
						putchar(z + '0');
						putchar(w + '0');
						if ((x == 9) && (y == 8) && (z == 9) && (w == 9))
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
				}
				/* w = y + 1;*/
			}
		}
	}
	putchar('\n');
	return (0);
}
