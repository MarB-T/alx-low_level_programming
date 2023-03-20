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
	char *saved_name;
	char *saved_owner;

	saved_name = malloc((sizeof(char) * _strlen(name) + 1));
	if (saved_name == NULL)
		return (NULL);
	saved_owner = malloc((sizeof(char) * _strlen(owner) + 1));
	if (saved_owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = saved_name;
	dog->age = age;
	dog->owner = saved_owner;
	return (dog);
}
