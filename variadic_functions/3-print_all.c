#include "variadic_functions.h"

/**
 * print_all - prints anything based on format string
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, printed = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			_putchar_str(sep);
			if (format[i] == 'c')
				_putchar(va_arg(args, int));
			if (format[i] == 'i')
				_putchar_int(va_arg(args, int));
			if (format[i] == 'f')
				_putchar_float(va_arg(args, double));
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				_putchar_str(str);
			}
			sep = ", ";
		}
		i++;
	}
	va_end(args);
	_putchar('\n');
}
