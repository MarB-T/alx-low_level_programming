#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - finds the lenght of a string
 * @s: the string in question
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}



/**
 * copyof - copies a given string
 * @s: the string in question
 * Return: string pointer
 */

char *copyof(char *s)
{
	int i;
	char *cp;

	cp = malloc((sizeof(char) * _strlen(s)) + 1);
	if (cp == NULL)
		return (NULL);
	for (i = 0; s[i]; i++)
	{
		cp[i] = s[i];
	}
	cp[i] = '\0';
	return (cp);
}


/**
 * new_dog - creates new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's ownwer
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = copyof(name);
	dog->age = age;
	dog->owner = copyof(owner);
	return (dog);
}
