#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct printer_s - Struct to associate a format token with a function
 * @token: The format character ('c', 'i', 'f', 's')
 * @f: Function pointer to the corresponding print function
 */
struct printer_s
{
	char token;
	void (*f)(va_list *);
};

/**
 * print_all - prints anything based on a format string
 * @format: string containing format specifiers
 */
void print_all(const char * const format, ...);

#endif
