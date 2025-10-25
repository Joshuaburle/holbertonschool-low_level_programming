#include "main.h"

/**
 *times_table - print every * table from 0 to 9
 *
 *
 * return: always 0 on sucess
 */

void times_table(void)
{
	int m;
	int p;

	for (m = 0; m <= 9; m++)
	{
		for (p = 0; p <= 9; p++)
		{
			if (m * p > 9)
			{
				_putchar(m * p / 10 + '0');
				_putchar(m * p % 10 + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(m * p + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
