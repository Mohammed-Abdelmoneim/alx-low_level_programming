#include "main.h"
#include "string.h"
/**
 * _strcpy - copies the string 
 * @dest: copy to this pointer
 * @src: copy from this 
 *
 * Return: 0 success
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}

