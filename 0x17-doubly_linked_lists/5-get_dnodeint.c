#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: head of linked list
 * @index: index of the node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (count == index)
			return (head);

		count++;
		head = head->next;
	}

	return (head);
}
