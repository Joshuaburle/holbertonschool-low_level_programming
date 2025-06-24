#include "main.h"
#include <stdio.h>

/**
*print_numbers - Print all numbers from 0 to 9
*Return: returns void
*/
void print_most_numbers(void)
{
	int number = 48;

	for (number = 48; number < 58; number++)
	{
		if (number != 50 && number != 52)
			putchar(number);
	}
		_putchar(10);

}
