#include <stdio.h>

/**
 * main - Diplay the alphabet in lower case using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 122;

	for (a = 122; a >= 97; a--)
	{
		char b = a;

		putchar(b);
	}
	putchar('\n');
	return (0);
}
