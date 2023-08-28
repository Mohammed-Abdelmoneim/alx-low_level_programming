#include "main.h"
#include <string.h>
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: the source string
 * @to: the param to set the value to.
 */

void set_string(char **s, char *to)
{
	*s = to;
}

