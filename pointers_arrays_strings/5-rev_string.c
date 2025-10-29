#include "main.h"

/**
 *rev_string - reverse a string
 *@s: s is a pointer
 *
 * Description: reverse a string
 * section header:
 * Return: 0 on sucess
 */

void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int rev;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
		rev = len - 1;
	}

	while (start < rev)
	{
		tmp = s[start];
		s[start] = s[rev];
		s[rev] = tmp;

		start++;
		rev--;
	}
}
