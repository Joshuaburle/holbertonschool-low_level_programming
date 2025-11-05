#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing the bytes to accept
 *
 * Description: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 *
 * Return: number of bytes in the initial segment of s containing only
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *j;

	while (*s)
	{
		j = accept;
		while (*j)
		{
			if (*s == *j)
				break;
			j++;
		}
		if (*j == '\0')
			return (i);
		i++;
		s++;
	}
	return (i);
}
