#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts string to integer
 * @s: Pointer to string
 * Description: Converts string to integrer
 * Return: converted integer or 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	while (*s)
	{
		if (!found_digit && *s == '-')
		{
			sign *= -1;
		}
		else if (!found_digit && *s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = result * 10 + (*s - '0');
		}
		else if (found_digit)
		{
			break;
		}
		s++;
	}

	return result * sign;
}
