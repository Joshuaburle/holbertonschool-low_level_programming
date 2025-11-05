#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to match
 *
 * Description: The function locates the first occurrence in the string s
 * of any of the bytes in the string accept. Returns a pointer to the
 * matching byte in s, or 0 if no such byte is found.
 *
 * Return: pointer to the matching byte in s, or 0
 */

char *_strpbrk(char *s, char *accept)
{
	char *i;

	while (*s)
	{
		i = accept;
		while (*i)
		{
			if (*s == *i)
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
