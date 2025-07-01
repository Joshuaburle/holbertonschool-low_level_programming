#include "main.h"
#include <string.h>
/**
 * _memset - filled area memory
 * @s: pointer to filled memory
 * @b: byte value
 * @n: number of byte
 * Return: pointer to (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
