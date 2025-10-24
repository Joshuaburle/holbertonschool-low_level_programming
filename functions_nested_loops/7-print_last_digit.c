#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: check what return 0
 *
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	_putchar(_abs(n) % 10 + '0');
	return (_abs(n) % 10);
}
