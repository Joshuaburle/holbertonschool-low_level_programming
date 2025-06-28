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
	int find = 0;

	while (*s)
	{
		if (!find && *s == '-')
		{
			sign *= -1;
		}
		else if (!find && *s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			find = 1;
			result = result * 10 + (*s - '0');
		}
		else if (find)
		{
			break;
		}
		s++;
	}

	return result * sign;
}
