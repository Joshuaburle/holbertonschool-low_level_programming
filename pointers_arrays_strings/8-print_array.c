#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array
 * @a: Pointer to the array of integers
 * @n: Number of elements to print
 * Description: The numbers are print in the same order
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
	if (inc != n - 1)
		printf("%d, ", a[inc]);
	else
		printf("%d", a[inc]);

	}
	printf("\n");
}
