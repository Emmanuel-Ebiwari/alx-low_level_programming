#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: double pointer
 * @idx: index to insert node
 * @n: number of node
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = *h;

	if (!*h)
		*h = new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
			return (NULL);
	}
	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	temp->next->prev = new_node;

	return (new_node);
}
