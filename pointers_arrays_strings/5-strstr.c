#include <stdio.h>

/**
 * _strstr - finds the first occurrence of needle in haystack
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to start of substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
