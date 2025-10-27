#include "main.h"

/**
 * _isdigit - fonction that checks for a digit (0 through 9)
 * @c: (0 through 9)
 *
 * Description: fonction that checks for a digit (0 through 9)
 * section header:
 * Return: 1 for digit otherwhise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
