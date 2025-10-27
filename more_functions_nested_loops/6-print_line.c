#include "main.h"

/**
 *print_line - function that draws a straight line in the terminal
 *
 *Description: function that draws a straight line in the terminal
 *@n: int n
 *section header:
 *Return: always 0 on sucess
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n == 0)
		{
			continue;
		}
		_putchar('_');
	}
	_putchar('\n');
}
