#include "main.h"
#include <ctype.h>

int  _isupper(int c)
{
	int r = isupper(c);

	if (r != 0)
		return (1);
	else if (isdigit(c) != 0)
		return (1);
	else
		return (0);
	return (r);
}
