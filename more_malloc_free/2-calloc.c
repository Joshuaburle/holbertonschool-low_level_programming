#include <stdlib.h>

/**
 * _calloc - Allocates zero-initialized memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
