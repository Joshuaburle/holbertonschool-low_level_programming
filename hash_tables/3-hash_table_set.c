#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table
 * @ht: Pointer to the hash table
 * @key: The key (cannot be an empty string)
 * @value: The value to store (must be duplicated)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *current;
	unsigned long int index;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	/* Check if key already exists: update */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}

	/* Key does not exist: create a new node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_copy);
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		free(value_copy);
		return (0);
	}

	node->value = value_copy;

	/* Insert at the beginning of the list (chaining) */
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
