#include "main.h"

/**
 *_puts -  prints a string
 *@str: str is a pointer
 *
 * Description:  prints a string
 * section header:
 * Return: 0 on sucess
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
