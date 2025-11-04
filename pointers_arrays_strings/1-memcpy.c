#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination buffer
 * @src: pointer to the source buffer
 * @n: number of bytes to copy
 *
 * Description: Copies exactly n bytes from memory area src to
 * memory area dest. The memory areas must not overlap.
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
