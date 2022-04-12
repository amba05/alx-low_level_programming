#include "dog.h"

/**
 * init_dog - initializing a pointer to struct variables
 *
 * @d: the pointer to struct
 * @name: name of the dog
 * @age: dog's age
 * @owner: it's owner
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
