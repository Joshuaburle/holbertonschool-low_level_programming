#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string to print
 * Description: This function prints the string
 * On sucess: return the numbers of the characters
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
