#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer
 * @index: index of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (current_node)
	{
		if (count == index)
			return (current_node);

		count++;
		current_node = current_node->next;
	}

	return (current_node);
}
