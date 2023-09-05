#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 *@size: size of the array
 *@c: array
 *
 * Return: 0 success
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *t;
t = malloc(size * sizeof(char));

if (t == NULL || size == 0)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
t[i] = c;
}

return (t);
}
