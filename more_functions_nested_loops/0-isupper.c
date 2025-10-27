#include "main.h"

/**
 * _isupper - checks for character if its lowercase or uppercase
 * @c: search in ascii for A to Z
 *
 * Description: checks forlowercase or uppercase  for uppercase 0 for lowercase
 * section header:
 * Return: 1 for uppercase 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
