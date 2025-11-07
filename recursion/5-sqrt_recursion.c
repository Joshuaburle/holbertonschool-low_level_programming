#include "main.h"

/**
 * function_test - to make the operation for find the square root
 * @x: The number for test
 * @n: The number to get the square root
 *
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int function_test(int x, int n)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (function_test(x + 1, n));
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

	return (function_test(0, n));
}
