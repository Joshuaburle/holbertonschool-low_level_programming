#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: Input string
 * Return: Pointer to the modified string
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}

	return (s);
}
