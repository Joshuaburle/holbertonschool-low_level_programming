#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print a char obtained from a va_list
 * @ap: pointer to the va_list holding the arguments
 * @sep: separator string to print before the value
 */
static void print_char(va_list *ap, const char *sep)
{
	printf("%s%c", sep, (char)va_arg(*ap, int));
}

/**
 * print_int - print an integer obtained from a va_list
 * @ap: pointer to the va_list holding the arguments
 * @sep: separator string to print before the value
 */
static void print_int(va_list *ap, const char *sep)
{
	printf("%s%d", sep, va_arg(*ap, int));
}

/**
 * print_float - print a float obtained from a va_list
 * @ap: pointer to the va_list holding the arguments
 * @sep: separator string to print before the value
 */
static void print_float(va_list *ap, const char *sep)
{
	printf("%s%f", sep, va_arg(*ap, double));
}

/**
 * print_str - print a string obtained from a va_list
 * @ap: pointer to the va_list holding the arguments
 * @sep: separator string to print before the value
 *
 * If the string is NULL, (nil) is printed instead.
 */
static void print_str(va_list *ap, const char *sep)
{
	char *s = va_arg(*ap, char *);

	if (s == NULL)
		printf("%s(nil)", sep);
	else
		printf("%s%s", sep, s);
}


/**
 * print_all - prints anything according to format
 * @format: string with format specifiers: c, i, f, s
 *
 * Description: prints the arguments separated by ", ".
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *p;
	const char *sep = "";
	int i;

	printer_t printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	va_start(ap, format);
	if (format != NULL)
	{
		p = format;
		while (*p)
		{
			i = 0;
			while (printers[i].id)
			{
				if (printers[i].id == *p)
				{
					printers[i].f(&ap, sep);
					sep = ", ";
					break;
				}
				i++;
			}
			p++;
		}
	}
	va_end(ap);
	printf("\n");
}
