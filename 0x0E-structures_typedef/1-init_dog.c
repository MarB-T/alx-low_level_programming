#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the dog struct
 * @d: pointer to dog struct
 * @name: name to initialize to
 * @age: age to initialize to
 * @owner: owner to initialie to
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
