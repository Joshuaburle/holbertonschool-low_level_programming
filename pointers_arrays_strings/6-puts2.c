#include "main.h"

/**
 *puts2 -  prints a string
 *@str: str is a pointer
 *
 * Description: prints a string
 * section header:
 * Return: 0 on sucess
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
			_putchar(str[i] + 2);

	_putchar('\n');
}
