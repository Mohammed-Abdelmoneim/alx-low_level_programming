#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of memory
 *
 * Return: 0 succuss / 98 on fail
*/
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
