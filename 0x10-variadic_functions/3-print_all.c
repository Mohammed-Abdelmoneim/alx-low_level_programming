#include "variadic_functions.h"
/**
 * print_all -  prints numbers, followed by a new line.
 * @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *s = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", s, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", s, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (!str)
					str = "(nil)";
				printf("%s%s", s, str);
				break;
			default:
				i++;
				continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
