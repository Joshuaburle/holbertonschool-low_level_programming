#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination buffer
 * @src: source string
 * @n: bytes for sources
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	int i;

	while (*d)
		d++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		d[i] = src[i];

	d[i] = '\0';
	return (dest);
}
