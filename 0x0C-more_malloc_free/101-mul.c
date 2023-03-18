#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * is_number - checks if string is number
 * num: pointer to the string
 * Return: number (int) if valid
 */

int is_number(char *num)
{
	int len, i;

	len = strlen(num);
	for (i = 0; i < len; i++)
	{
		if(!isdigit(num[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - multiply two positive numbers
 * @argc: argument count
 * @argv: agument vector
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int i, j, result_len, len1, len2, *num1, *num2, max_len, *result;
	char *str1, *str2;

	if (argc != 3)
	{
		printf("Errror\n");
		exit(98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	str1 = argv[1];
	str2 = argv[2];
	len1 = strlen(str1);
	len2 = strlen(str2);
	num1 = malloc(sizeof(int) * len1);
	num2 = malloc(sizeof(int) * len2);
	for (i = 0; i < len1; i++)
	{
		num1[i] = str1[len1 -i -1] - '0';
	}
	for (j = 0; j < len2; j++)
	{
		num2[j] = str2[len2 - i -1] - '0';
	}
	max_len = len1 + len2;
	result = malloc(sizeof(int) * max_len);
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			result[i + j] += num1[i] * num2[j];
		}
	}
	for (i = 0; i < max_len - 1; i++)
	{
		result[i + 1] += result[i] / 10;
		result[i] %= 10;
	}
	result_len = max_len;
	while (result_len > 1 && result[result_len - 1] == 0)
	{
		result_len--;
	}
	for (i = result_len - 1; i >= 0; i--)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	free(num1);
	free(num2);
	free(result);
	return (0);


}
