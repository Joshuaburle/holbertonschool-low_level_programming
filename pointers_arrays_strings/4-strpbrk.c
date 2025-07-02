#include <stdio.h>

/**
 * _strpbrk - finds the first matching byte in s from accept
 * @s: string to search
 * @accept: string with bytes to match
 *
 * Return: match in s, or NULL if none
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}

		s++;
	}

	return (NULL);
}
