#include <stdlib.h>

/**
 * create_array - Create and initialize an array with a char
 * @size: Size of the array
 * @c: Char to fill the array with
 * Return: Pointer to array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
