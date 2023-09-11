#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	char *nname = name;
	char *nowner = owner;
	float nage = age;
	if (nage == 0)
		age = 0;
	if (nname == NULL)
		name = "(nil)";
	if (nowner == NULL)
		owner = "(nil)";
	if (newDog == NULL)
		return (NULL);

	return (newDog);
}

