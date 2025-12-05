#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of pointer to the first node
 * @idx: index where the new node should be added (starts at 0)
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL && count < idx)
	{
		if (count == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = current->next;
			new->prev = current;

			if (current->next != NULL)
				current->next->prev = new;

			current->next = new;
			return (new);
		}
		current = current->next;
		count++;
	}

	if (count == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
