#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to the new dog_t or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_instance;
	char *name_copy;
	char *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog_instance = malloc(sizeof(dog_t));
	if (dog_instance == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(dog_instance);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog_instance);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	dog_instance->name = name_copy;
	dog_instance->age = age;
	dog_instance->owner = owner_copy;

	return (dog_instance);
}
