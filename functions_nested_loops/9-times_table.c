#include "main.h"

/**
 *times_table - print every * table from 0 to 9
 *
 *
 * return: always 0 on sucess
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j <= 9)
			{
				if (j == 0)
				{
					_putchar(i * j + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(i * j + '0');
				}
			}
			else
			{
			_putchar(',');
				_putchar(' ');
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
