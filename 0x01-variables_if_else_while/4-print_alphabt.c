#include <stdio.h>

/**
 * main - Diplay the alphabet in lower case using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 97;

	for (a = 97; a <= 100; a++)
	{
		char b = a;
		if ((a != 100) && (a != 113))
		{
			putchar(b);
		}
	}
	putchar('\n');
	return (0);
}
