#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - prints a struct dog
 * @name: his name
 * @age: his age
 * @owner: his owner
 *
 * Return: 0 successs
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = (char *)malloc(sizeof(char) * strlen(name) + 1);
	newDog->owner = (char *)malloc(sizeof(char) * strlen(owner) + 1);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		return (NULL);
	}
	strcpy(newDog->name, name);
	newDog->age = age;
	strcpy(newDog->owner, owner);
	return (newDog);
}
