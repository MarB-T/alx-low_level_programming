#include <stdio.h>

/**
 * print_alphabet - Prints lowercase alphabet
 */

void print_alphabet(void)
{
	int i = 97;

	for (i = 97; i <= 122; i++)
	{
		char b = i;

		putchar(b);
	}
	putchar('\n');
}
