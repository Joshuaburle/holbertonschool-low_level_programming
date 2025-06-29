#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: The input string
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int cap_next = 1;
	char sep[] = " \t\n,;.!?\"(){}";
	int j;

	while (s[i])
	{
		if (cap_next && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		cap_next = 0;
		for (j = 0; sep[j]; j++)
		{
			if (s[i] == sep[j])
			{
				cap_next = 1;
				break;
			}
		}
		i++;
	}

	return (s);
}
