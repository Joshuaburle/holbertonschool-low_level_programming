#include "main.h"
#include <stdio.h>

/**
*print_most_numbers - Print all numbers from 0 to 9
* without 2 & 4
*Return: returns void
*/
void print_most_numbers(void)
{
	int number = 48;

	for (number = 48; number < 58; number++)
	{
		if (number != 50 && number != 52)
			_putchar(number);
	}
		_putchar('\n');
}
