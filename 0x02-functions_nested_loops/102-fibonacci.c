#include <stdio.h>

/**
 * main - main block
 * Description: First 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int count = 0;
	long j = 1, k = 2;

	while (count < 50)
	{
		if (count == 0)
			printf("%ld", j);
		else if (count == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}

		count++;
	}

	printf("\n");
	return (0);
}
