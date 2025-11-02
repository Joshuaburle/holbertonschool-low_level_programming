#include "main.h"

/**
 *string_toupper - converts all lowercase letters of a string to uppercase
 *@s: input string to modify
 *
 * Description: converts lowercase letters to uppercase in-place
 * section header:
 * Return: pointer to the resulting string
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = *p - ('a' - 'A');
		p++;
	}
	return (s);
}
