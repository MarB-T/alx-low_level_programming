#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: list of arguments passed
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	if (argv[0])
	{
		printf("%d\n", argc);
	}
	return (0);
}
