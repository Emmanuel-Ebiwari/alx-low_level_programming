#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 *
 * @head: double pointer
 * @index: index of node to be deleted
 *
 * Return: 1 if succeeded -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *current = *head;
	listint_t *next;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(*head);
		return (1);
	}

	while (current->next && (count < index))
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		count++;
		current = current->next;
	}

	next = current->next->next;
	free(current->next);
	current->next = next;
	return (1);
}
