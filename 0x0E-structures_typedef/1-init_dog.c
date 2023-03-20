#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the dog struct
 * @d: pointer to dog struct
 * @name: name to initialize to
 * @age: age to initialize to
 * @owner: owner to initialie to
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
