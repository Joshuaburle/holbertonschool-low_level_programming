#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated string containing s1 + s2,
 *         or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	result = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (!result)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[i] = s1[i];

	for (j = 0; s2[j]; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
