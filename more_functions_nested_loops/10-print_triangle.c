#include "main.h"

/**
 *print_triangle - print a triangle with #
 *
 *Description: print a triangle with # and manage the slace
 *@size: size numbers of #
 *section header:
 *Return: always 0 on sucess
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
