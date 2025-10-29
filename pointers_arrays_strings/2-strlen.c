#include "main.h"

/**
 *_strlen - return the lenght of a string
 *@s: s is a pointer
 *
 * Description: return the lenght of a string
 * section header:
 * Return: the value
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
