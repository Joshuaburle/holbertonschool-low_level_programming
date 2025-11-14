#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees all memory allocated for a dog structure,
 * including the memory for name and owner strings.
 * Return: Nothing (void)
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
