#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers passed in cl
 * @argc: number of arguments passed
 * @argv: list of arguments
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
		printf("Error\n");
	return (argc - argc);
}
