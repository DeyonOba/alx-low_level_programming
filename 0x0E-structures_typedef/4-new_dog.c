#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function gets the length of the a string
 * @str: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strcopy - function duplicates a string
 * @str: pointer to string
 * @len: length of string
 * @structure: pointer to a structure
 *
 * Return: pointer to new structure
 */
char *_strcopy(char *str, int len, char *structure)
{
	int i;

	for (i = 0; i < len; i++)
		structure[i] = str[i];

	return (structure);
}

/**
 * new_dog - function that creates a new dog
 * @name: pointer to a string containing the name of the dog
 * @age: pointer to a string containing the age of the dog
 * @owner: pointer to a string containing the name of the owner
 *
 * Return: structure of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int namelen, ownerlen;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	namelen = _strlen(name);
	ownerlen = _strlen(owner);

	dog->name = malloc(sizeof(dog->name) * namelen);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(name, namelen, dog->name);

	dog->owner = malloc(sizeof(dog->owner) * ownerlen);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->owner = _strcopy(owner, ownerlen, dog->owner);
	
	if (age <= 0)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->age = age;

	return (dog);
}
