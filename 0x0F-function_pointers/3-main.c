#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - perform arithmetic calculations
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0- success
 */

int main(int argc, char **argv)
{
	int a, b;
	char op[5] = {'+', '-', '*', '/', '%'};
	char p = *argv[2];

	if (argc == 4)
	{
		if (strchr(op, (int)p) != NULL)
		{
			if (!((p == '/' || p == '%') && *argv[3] == '0'))
			{
				a = atoi(argv[1]);
				b = atoi(argv[3]);
				printf("%d\n", (get_op_func(&p)(a, b)));
			}
			else
			{
				printf("Error\n");
				exit(100);
			}
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
