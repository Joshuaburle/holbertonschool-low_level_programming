#include "main.h"
#include <stdio.h>

/**
  * puts_half -  prints a string
  * @str: string to be printed
  * Return: string to print
  */

void puts_half(char *str)
{
	int length, n;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		n = length / 2;
		while (length > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (length + 1) / 2;

		while (length > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
