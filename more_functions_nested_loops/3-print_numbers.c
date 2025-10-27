#include "main.h"

/**
 *print_numbers - function that prints the numbers, from 0 to 9
 *
 *Description: function that prints the numbers, from 0 to 9, new line
 *section header:
 *Return: always 0 on sucess
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
