#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - calculates the length of a string
 * @s: string to calculate
 *
 * Return: length of the string
 */
static unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if fails
 */
static char *_strdup(const char *str)
{
	unsigned int len = _strlen(str);
	char *dup = malloc(len + 1);
	unsigned int i;

	if (!dup)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	len = _strlen(str);
	new_node->str = _strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
