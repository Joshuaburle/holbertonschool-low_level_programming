#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: String to copy
 *
 * Return: Pointer to new string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[i] = '\0';
	return (copy);
}
