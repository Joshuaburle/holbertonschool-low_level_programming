#include <stdio.h>
#include "function_pointer.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: the function pointer to use for printing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)

	f(name);
}
