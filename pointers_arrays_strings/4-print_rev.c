#include "main.h"

/**
 *print_rev - reverse a string
 *@s: s is a pointer
 *
 * Description: reverse a string
 * section header:
 * Return: 0 on sucess
 */

void print_rev(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
		for (j = i; j >= 0; j--)
		{
			_putchar(s[j]);
			_putchar('\n');
		}
}
