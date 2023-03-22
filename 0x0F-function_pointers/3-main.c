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
	int a, b, result;
	char op[5] = {'+', '-', '*', '/', '%'};
	char p = *argv[2];

	if (argc == 4)
	{
		if (strchr(op, (int)p) != NULL)
		{
			if (!((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0'))
			{
				a = atoi(argv[1]);
				b = atoi(argv[3]);
				result = (get_op_func(&p))(a, b);
				printf("%d\n", result);
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
