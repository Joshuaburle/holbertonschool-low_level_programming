#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@s: input string to modify
 *
 * Description: Capitalizes the first letter of each word.
 * Word separators: space, tabulation, new line
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (!s)
		return (s);

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
			s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
			s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		i++;
	}

	return (s);
}
