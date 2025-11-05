#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (cast from int[][])
 * @size: dimension of the square matrix
 *
 * Description: Computes the sum of the primary and secondary diagonals
 * of a square matrix of integers and prints the two sums separated by
 * a comma and a space, followed by a newline.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("%ld, %ld\n", sum1, sum2);
}
