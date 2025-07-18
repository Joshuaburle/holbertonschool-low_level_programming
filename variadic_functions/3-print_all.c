#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints any type based on a format string
 * @format: A list of argument types passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *sep = "";
	char type;

	va_start(args, format);

	while (format && format[i])
	{
		type = format[i];

		if (type == 'c' || type == 'i' || type == 'f' || type == 's')
		{
			printf("%s", sep);

			if (type == 'c')
				printf("%c", va_arg(args, int));
			if (type == 'i')
				printf("%d", va_arg(args, int));
			if (type == 'f')
				printf("%f", va_arg(args, double));
			if (type == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
			}
			sep = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
