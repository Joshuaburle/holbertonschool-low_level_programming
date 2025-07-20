#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char argument
 * @args: pointer to va_list containing the char to print
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_int - prints an integer argument
 * @args: pointer to va_list containing the int to print
 */
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - prints a float argument
 * @args: pointer to va_list containing the float to print
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - prints a string argument
 * @args: pointer to va_list containing the string to print
 * If the string is NULL, prints (nil)
 */
void print_string(va_list *args)
{
	char *str = va_arg(*args, char *);

	if (!str)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything based on a format string
 * @format: string containing format specifiers:
 *          c: char
 *          i: int
 *          f: float
 *          s: string
 *
 * Prints each argument separated by ", " and ends with a new line.
 * Ignores any other characters in format.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";
	char tokens[] = "cifs";
	 void (*functions[])(va_list *) = {print_char, print_int,
		print_float, print_string};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j])
		{
			if (format[i] == tokens[j])
			{
				printf("%s", separator);
				functions[j](&args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
