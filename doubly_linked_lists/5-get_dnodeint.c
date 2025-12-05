#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: index of the node, starting from 0
 *
 * Return: the node at index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	return (current);
}
