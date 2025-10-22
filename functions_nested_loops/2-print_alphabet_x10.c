#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int ten;
	char i;

	for (ten = 0; ten < 10; ten++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
