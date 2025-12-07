#include "hash_tables.h"

/**
 * update_value - Updates the value of an existing node (internal function)
 * @node: Node to update
 * @value: New value
 *
 * Return: 1 on success, 0 on failure
 */
static int update_value(hash_node_t *node, const char *value)
{
	char *value_copy = strdup(value);

	if (value_copy == NULL)
		return (0);

	free(node->value);
	node->value = value_copy;

	return (1);
}

/**
 * hash_table_set - Adds or updates an element in a hash table
 * @ht: Hash table
 * @key: Key (non-empty string)
 * @value: Value to duplicate
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (update_value(node, value));
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
