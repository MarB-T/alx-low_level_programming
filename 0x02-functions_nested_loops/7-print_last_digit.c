#include <main.h>

/**
 * print_last_digit - Prints last digit of a number
 * @n: number to get last digit
 * Return: Last_digit of n
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
