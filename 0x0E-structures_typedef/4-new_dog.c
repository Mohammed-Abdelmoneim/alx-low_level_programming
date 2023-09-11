#include <stdio.h>
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

	char *nname = name;
	char *nowner = owner;
	float nage = age;

	if (nage == 0)
		age = 0;
	if (nname == NULL)
		name = "(nil)";
	if (nowner == NULL)
		owner = "(nil)";

	return (newDog);
}
