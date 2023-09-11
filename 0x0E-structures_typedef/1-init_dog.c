#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct
 * @name: dog's name
 * @age: his age
 * @owner: his owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

