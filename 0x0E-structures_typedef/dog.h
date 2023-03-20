#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog description
 * @name: name of the dog
 * @age:  dog's age
 * @owner: dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
