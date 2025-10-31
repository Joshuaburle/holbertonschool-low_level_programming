#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: destination buffer
 *
 * Description : convert a string to an integer
 * Return: The pointer to dest.
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;

	int INT_MAX = 2147483647;
	int INT_MIN = (-INT_MAX - 1);

	while (*s != '\0')
	{
		if (*s == '-')
			sign = sign * -1;
		else if (*s >= '0' && *s <= '9')
		{
			int num = *s - '0';

			if (sign == 1)
			{
				if (res > (INT_MAX - num) / 10)
					return (INT_MAX);
				res = res * 10 + num;
			}
			else
			{
				if (res > (-(INT_MIN + num)) / 10)
					return (INT_MIN);
				res = res * 10 - num;
			}
		}
		else if (res != 0)
			break;
		s++;
	}
	return (res);
}
