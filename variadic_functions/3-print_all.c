#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on a format string.
 * @format: List of argument types.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		while (format[i] && !(format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))
			i++;

		if (format[i])
		{
			printf("%s", sep);
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			}
			sep = ", ";
			i++;
		}
	}

	va_end(args);
	printf("\n");
}
