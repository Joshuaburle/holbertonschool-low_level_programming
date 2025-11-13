#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the dog structure
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	printf("%s\n", d->name);
    printf("%f\n", d->age);
    printf("%s\n", d->owner);
}
