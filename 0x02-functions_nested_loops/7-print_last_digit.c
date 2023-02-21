#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: number to get last digit
 * Return: Last_digit of n
 */

int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
