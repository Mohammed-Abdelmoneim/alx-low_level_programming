#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct
 */
void print_dog(struct dog *d)
{
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	if (d == NULL)
		printf("\n");
	else if (name == NULL)
		name = "(nil)";
	else if (age == 0)
		age = 0;
	else if (owner == NULL)
		owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}

