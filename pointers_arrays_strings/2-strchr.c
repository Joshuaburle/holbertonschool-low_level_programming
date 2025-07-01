#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: search the pointer
 * @c: locate
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')  /* Check if we're searching for null terminator */
		return (s);

	return (0);
}
