#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: list of passed arguments
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int sum = 0, i = 0, j = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
