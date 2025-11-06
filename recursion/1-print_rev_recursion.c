#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to be printed in reverse
 *
 * Description: Recursively traverses the string pointed to by s to its end,
 * then prints each character during the unwinding of the recursion, resulting
 * in the string being printed in reverse order.
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
