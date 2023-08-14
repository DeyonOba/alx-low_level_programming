#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the dog structure
 * @name: pointer to string for the dog name
 * @age: dog age float
 * @owner: pointer to string for the owner name
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
