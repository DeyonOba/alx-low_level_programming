#include <stdlib.h>
#include "dog.h"

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
	int namelen, ownerlen, i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	namelen = 0;
	while (*name != '\0')
	{
		namelen++;
		name++;
	}

	ownerlen = 0;
	while (*owner != '\0')
	{
		ownerlen++;
		owner++;
	}

	dog->name = malloc(sizeof(dog->name) * namelen);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		(*dog).name[i] = name[i];

	dog->owner = malloc(sizeof(dog->owner) * ownerlen);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerlen; i++)
		(*dog).owner[i] = owner[i];

	dog->age = age;

	return (dog);
}
