#include "main.h"

/**
 * print_alphabet - Entry point
 * Description : Write a function that prints the alphabet, in lowercase
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
