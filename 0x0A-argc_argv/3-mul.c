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
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
