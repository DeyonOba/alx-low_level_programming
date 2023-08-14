#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a new type structure for dogs
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* More function prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
