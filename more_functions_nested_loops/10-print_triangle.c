#include "main.h"
/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return:returns nothing
*/
void print_triangle(int size)
{
	int a1, b2;

	if (size > 0)
	{
		for (a1 = 1; a1 <= size; a1++)
		{
			for ((b2 = size - a1); b2 > 0; b2--)
				_putchar(' ');

			for (b2 = 0; b2 < a1; b2++)
				_putchar('#');

			if (a1 == size)
				continue;

		_putchar('\n');
		}
	}
	_putchar('\n');
}
