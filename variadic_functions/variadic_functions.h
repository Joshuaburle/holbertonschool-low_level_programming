#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer_s - maps a format character to a printing function
 * @id: the format character (c, i, f, s)
 * @f: pointer to the function that prints the corresponding type
 *
 * Description: Used by print_all to select and call the correct
 * printing function for each format specifier.
 */
typedef struct printer_s
{
	char id;
	void (*f)(va_list *, const char *);
} printer_t;

#endif /* VARIADIC_FUNCTIONS_H */
