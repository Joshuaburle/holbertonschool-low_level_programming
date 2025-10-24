#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: return last digit
 *
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int b = n % 10;

	if (n < 0)
	{
		b = -b;
		_putchar(b + '0');
		return (b);
	}
	else
	{
		_putchar(b + '0');
		return (b);
	}
}
