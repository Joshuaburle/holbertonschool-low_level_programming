#include "3-calc.h"

/**
 * op_add - Returns the sum of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of dividing one integer by another.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of a / b.
 *         If b is 0, the behavior is undefined (handled elsewhere).
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of a % b.
 *         If b is 0, the behavior is undefined (handled elsewhere).
 */
int op_mod(int a, int b)
{
	return (a % b);
}
