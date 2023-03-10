#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: list of arguments passed
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
