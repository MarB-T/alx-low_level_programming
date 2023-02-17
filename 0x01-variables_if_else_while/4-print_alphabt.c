#include <stdio.h>

/**
 * main - Diplay the alphabet in lower case using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 97;

	for (a = 97; a <= 122; a++)
	{
		char b = a;

		if ((b == 'e') || (b == 'q'))
		{
		}
		else
		{
			putchar(b);
		}
	}
	putchar('\n');
	return (0);
}
