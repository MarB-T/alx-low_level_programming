#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the structure dog
 * @d: pointer to dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age < 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
