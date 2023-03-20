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
 * @saved: the saved copy
 * Return: string pointer
 */

char *copyof(char *s, char *saved)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		saved[i] = s[i];
	}
	saved[i] = '\0';
	return (saved);
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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog->name = malloc((sizeof(char) * _strlen(name) + 1));
	if (dog->name == NULL)
		return (NULL);
	dog->owner = malloc((sizeof(char) * _strlen(owner) + 1));
	if (dog->owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = copyof(name, dog->name);
	dog->age = age;
	dog->owner = copyof(owner, dog->owner);
	return (dog);
}
