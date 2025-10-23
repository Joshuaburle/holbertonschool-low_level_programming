#include "main.h"

/**
 * print_sign - make a function to know the sign
 *@n: check what return 0
 *
 * Return: 1 positive 0 equal -1 negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
