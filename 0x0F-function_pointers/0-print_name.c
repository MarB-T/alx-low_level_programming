#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name using function pointers
 * @name: the name to print
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
