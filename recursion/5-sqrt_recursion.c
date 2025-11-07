#include "main.h"

/**
 * function_helper - to make the operation for find the square root
 * @x: The number for test
 * @n: The number to get the square root
 *
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
static int function_helper(int x, int n)
{
	long prod = (long)x * x;

	if (prod == n)
		return (x);

	if (prod > n)
		return (-1);

	return (function_helper(x + 1, n));
}

/**
 * _sqrt_recursion - Return the natural square root of a number.
 * @n: The number to compute the square root.
 *
 * Return: The natural square root, or -1 if it does not exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (function_helper(0, n));
}
