#include "main.h"

/**
 *swap_int - SWAP THE VALUE BETWEEN TWO INT
 *@a: a
 *@b: b
 *
 * Description: SWAP THE VALUE BETWEEN TWO INT
 * section header:
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
