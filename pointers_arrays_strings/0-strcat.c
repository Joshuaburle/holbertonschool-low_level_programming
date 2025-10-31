#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *@dest: string of dest
 *@src: base string
 *
 * Description: function that concatenates two strings
 * section header:
 * Return: ptr
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
