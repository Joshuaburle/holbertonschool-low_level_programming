#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head of the list
 * @idx: index where the new node should be added (starts at 0)
 * @n: value to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp != NULL && count < idx)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
	{
		if (count == idx)
			return (add_dnodeint_end(h, n));
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp;
	new_node->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = new_node;

	temp->prev = new_node;

	return (new_node);
}
