#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 * or if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *feldup;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	feldup = malloc(i + 1);

	if (feldup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		feldup[i] = str[i];
	feldup[i] = '\0';

	return (feldup);
}
