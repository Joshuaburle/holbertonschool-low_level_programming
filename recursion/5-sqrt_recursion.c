#include "main.h"

/**
 * _sqrt_helper - recursive helper to find the natural square root
 * @n: number to compute the natural square root for
 * @i: current integer to try as potential square root
 *
 * Description: Tries successive integers starting at i. If i * i == n,
 * returns i. If i * i > n, returns -1 (no natural square root).
 * Return: natural square root of n, or -1 if none exists.
 */
static int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to compute the natural square root for
 *
 * Description: If n does not have a natural square root, the function
 * returns -1. Uses the recursive helper _sqrt_helper starting at 0.
 * Return: natural square root of n, or -1 if none exists.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
