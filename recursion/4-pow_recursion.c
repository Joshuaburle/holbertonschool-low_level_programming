#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base integer
 * @y: exponent integer
 *
 * Description: Recursively computes x raised to the power y. If y is lower
 * than 0, the function returns -1 to indicate an error. The value of x^0 is 1.
 * Return: x raised to the power y, or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
