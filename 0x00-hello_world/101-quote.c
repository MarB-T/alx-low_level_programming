#include <stdio.h>
/**
 * main - print a string without using puts or printf
 * Return: 1 (Success)
 */
int main(void)
{
	const char str[] = "(and that piece of art is useful\" - Dora Korpar, 2015-10-19)\n";
	fputs(str, stdout);
	return (1);
