#include <stdio.h>

/**
 * main - Diplay the alphabet in lower case using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 97;
	int x = 65;

	for (a = 97; a <= 122; a++)
	{
		char b = a;

		putchar(b);
	}
	for (x = 65; x <= 90; x++)
	{
		char b = x;

		putchar(b);
	}

	putchar('\n');
	return (0);
}
