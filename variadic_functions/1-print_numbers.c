#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string printed between numbers (can be NULL)
 * @n: number of integers passed to the function
 * @...: the integers to print
 *
 * Description: If separator is NULL, numbers are printed without separator.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		int value = va_arg(ap, int);

		if (separator != NULL && i != 0)
			printf("%s", separator);
		printf("%d", value);
	}
	va_end(ap);
	printf("\n");
}
