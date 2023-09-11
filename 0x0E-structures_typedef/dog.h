#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - new dog struct
 * @name: dog's name
 * @age: his age
 * @owner: his owner
 *
 * Description: dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif