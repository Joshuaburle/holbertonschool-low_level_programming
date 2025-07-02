#include "main.h"

/**
 * _strspn - length
 * @s: search
 * @accept: accept
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}

		if (!match)
			break;

		count++;
	}

	return (count);
}
