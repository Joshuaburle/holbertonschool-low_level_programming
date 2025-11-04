#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: byte to fill the memory with
 * @n: number of bytes to be changed
 *
 * Description: Fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;	
		i++;
	}

	return (s);
}
