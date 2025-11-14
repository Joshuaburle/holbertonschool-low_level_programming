#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 * or if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *feldup;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	feldup = malloc(i + 1);

	if (feldup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		feldup[i] = str[i];
	feldup[i] = '\0';

	return (feldup);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bio;

	bio = malloc(sizeof(dog_t));

	if (bio == NULL)
		return (NULL);

	bio->name = _strdup(name);
	if (bio->name == NULL)
	{
		free(bio);
		return (NULL);
	}

	bio->owner = _strdup(owner);
	if (bio->owner == NULL)
	{
		free(bio->name);
		free(bio);
		return (NULL);
	}

	bio->age = age;

	return (bio);
}
