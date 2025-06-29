#include "main.h"

/**
 * reverse_array - Reverse the content of an array and integer
 * @a: Array of integer
 * @n: Number of element in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
