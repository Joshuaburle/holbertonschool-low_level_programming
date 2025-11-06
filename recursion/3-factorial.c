#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to compute the factorial of
 *
 * Description: If n is lower than 0, the function returns -1 to indicate an
 * error. The factorial of 0 is 1
 * Return: factorial of n, or -1 for n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
