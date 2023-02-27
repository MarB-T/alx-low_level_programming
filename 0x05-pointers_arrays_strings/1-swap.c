#include "main.h"

/**
 * swap_int - Swaps two integers
 * @a: First integer
 * @b: Second integer
 */

void swap_int(int *a, int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
