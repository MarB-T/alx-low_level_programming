#include "main.h"

/**
 * get_endianness - Checks system endianness
 * Return: 0-big endian, 1-litle endian
 */

int get_endianness()
{
	unsigned int b = 15;
	char *first = (char *)&b;


	if (*first == '1')
		return (0);
	else
		return (1);
}
