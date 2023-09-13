#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints name!
 * @name: the name
 * @f: the print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(EXIT_FAILURE);
	else
		(*f)(name);
		
	exit(EXIT_SUCCESS);
}
