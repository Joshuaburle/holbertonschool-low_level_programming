#include "main.h"

/**
 *more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 *Description: function that prints 10 times the numbers, from 0 to 14 new line
 *section header:
 *Return: always 0 on sucess
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
