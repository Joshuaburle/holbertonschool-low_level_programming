#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

void print_string(va_list *args)
{
	char *str = va_arg(*args, char *);

	if (!str)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";

	typedef struct printer_s
	{
		char token;
		void (*f)(va_list *);
	} printer_t;

	printer_t printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (printers[j].token)
		{
			if (format[i] == printers[j].token)
			{
				printf("%s", sep);
				printers[j].f(&args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
