#include "main.h"

/**
 *print_diagonal - function that draws a straight line in the terminal
 *
 *Description: function that draws a straight line in the terminal
 *@n: int n
 *section header:
 *Return: always 0 on sucess
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
