#include "function_pointers.h"

/**
 * print_name - prints a name using a provided function
 * @name: the name to print
 * @f: pointer to a function that handles the printing
 *
 * Description: If f is NULL this function does nothing. Otherwise it calls
 * the function pointed to by f with name as argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
