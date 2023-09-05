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

char *t;
t = malloc(size * sizeof(char));

if (t == NULL)
{
return (NULL);
}
*t = c;

return (t);
}
