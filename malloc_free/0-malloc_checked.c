#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: Bytes to allocate
 * Return: Pointer to memory or exit(98) on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
