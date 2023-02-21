#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet ten times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int a = 97;

	while (i < 10)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
