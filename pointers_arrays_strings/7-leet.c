#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string to modify
 *
 * Description: Replaces letters a/A->4, e/E->3, o/O->0, t/T->7, l/L->1
 * section header:
 * Return: pointer to the resulting string
 */
char *leet(char *s)
{
	char *from = "aAeEoOtTlL";
	char *to = "4433007711";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; from[j]; j++)
		{
			if (s[i] == from[j])
			{
				s[i] = to[j];
				break;
			}
		}
	}

	return (s);
}
